#include "Command.h"
#include "Application.h"
#include "Scene.h"
#include "Entity.h"
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <iterator>

static bool caseInsensitiveCompare(
        const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) {
        return false;
    }
    for (auto i = s1.cbegin(), j = s2.cbegin();
            i != s1.cend() && j != s2.cend(); ++i, ++j) {
        if (std::tolower(*i) != std::tolower(*j)) {
            return false;
        }
    }
    return true;
}

static Scene* getSceneById(int id) {
    std::cout << "method:getSceneById id:" << id << '\n';
    Scene* sce = nullptr;
    int cnt = 0;
    Application::instance().getMap().eachScene([&](auto scene){
        if (id == ++cnt) {
            sce = scene;
        }
    });
    return sce;
}

CommandInterpreter::CommandInterpreter() {
    std::cout << "CommandInterpreter initialized.\n";
}

Command* CommandInterpreter::interpret(const std::string& cmd) {
    std::cout << "class:CommandInterpreter method:interpret\n";
    std::istringstream iss(cmd);
    std::vector<std::string> words {
        std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>{}
    };
    if (caseInsensitiveCompare(words[0], "list")) {
        return new ListCommand;
    } else if (caseInsensitiveCompare(words[0], "show")) {
        auto scene = getSceneById(std::atoi(words[1].c_str()));
        if (scene == nullptr) {
            return new ErrorCommand(cmd);
        } else {
            return new ShowCommand(scene);
        }
    } else if (caseInsensitiveCompare(words[0], "kill")) {
        auto scene = getSceneById(std::atoi(words[1].c_str()));
        if (scene == nullptr) {
            return new ErrorCommand(cmd);
        }
        auto entity = scene->remove(std::atoi(words[2].c_str()));
        if (entity == nullptr) {
            return new ErrorCommand(cmd);
        }
        return new KillCommand(entity, &(Application::instance().getMap().getPlayer()));
    } else if (caseInsensitiveCompare(words[0], "help")) {
        return new HelpCommand;
    } else if (caseInsensitiveCompare(words[0], "plant")) {
        auto scene = getSceneById(std::atoi(words[1].c_str()));
        if (scene == nullptr) {
            return new ErrorCommand(cmd);
        } else {
            return new PlantCommand(scene);
        }
    } else if (caseInsensitiveCompare(words[0], "quit")) { 
        return new QuitCommand;
    } else if (caseInsensitiveCompare(words[0], "status")){
        return new StatusCommand(&(Application::instance().getMap().getPlayer()));
    } else {
        return new ErrorCommand(cmd);
    }
}

void ListCommand::execute(void) {
    std::cout << "class:ListCommand method:execute\n";
    int cnt = 0;
    Application::instance().getMap().eachScene([&](auto scene){
        std::cout << ++cnt << " : " << scene->typeName() << '\n';
    });
}

void ShowCommand::execute(void) {
    std::cout << "class:ShowCommand method:execute\n";
    int cnt = 0;
    scene->eachEntity([&](auto entity){
        std::cout << ++cnt << " : " << entity->typeName() << '\n';
    });
}

void HelpCommand::execute(void) {
    std::cout << "class:HelpCommand method:execute\n"
        "You can type commands to interactive with program.\n"
        "list show use quit help\n";
}

void QuitCommand::execute(void) {
    std::cout << "class:QuitCommand method:execute\n";
    Application::instance().setExit(true);
    std::cout << "Press any key to exit...";
    std::cin.get();
}

void PlantCommand::execute(void) {
    std::cout << "class:PlantCommand method:execute\n";
    scene->generate();
}

void ErrorCommand::execute(void) {
    std::cout << "class:ErrorCommand method:execute\n";
    std::cout << "Error in executing command: " << cmd << '\n';
}

void KillCommand::execute(void) {
    std::cout << "class:KillCommand method:execute\n";
    if (entity == nullptr || player == nullptr) {
        return;
    }
    player->acquire(entity->pick());
}

void StatusCommand::execute(void) {
    std::cout << "class:StatusCommand method:execute\n";
    if (player != nullptr) {
        player->outputItems();
    }
}
