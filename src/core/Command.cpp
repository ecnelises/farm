#include "Command.h"
#include "Application.h"
#include "Scene.h"
#include "Entity.h"
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>

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
    std::string s1;
    iss >> s1;
    if (caseInsensitiveCompare(s1, "list")) {
        return new ListCommand;
    } else if (caseInsensitiveCompare(s1, "show")) {
        int s2;
        iss >> s2;
        auto scene = getSceneById(s2);
        if (scene == nullptr) {
            return new ErrorCommand(cmd);
        } else {
            return new ShowCommand(scene);
        }
    } else if (caseInsensitiveCompare(s1, "help")) {
        return new HelpCommand;
    } else if (caseInsensitiveCompare(s1, "plant")) {
        int s2;
        iss >> s2;
        auto scene = getSceneById(s2);
        if (scene == nullptr) {
            return new ErrorCommand(cmd);
        } else {
            return new PlantCommand(scene);
        }
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
