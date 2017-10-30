#include "Command.h"
#include "Application.h"
#include "Scene.h"
#include "Entity.h"
#include <iostream>
#include <iterator>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <map>
#include <functional>
#include <algorithm>
#include <cctype>

// 大小写不敏感地比较两个字符串
struct CaseInsensitiveLess {
    bool operator() (std::string s1, std::string s2) const {
        std::for_each(std::begin(s1), std::end(s1), [](char& c){
            c = std::tolower(c);
        });
        std::for_each(std::begin(s2), std::end(s2), [](char& c){
            c = std::tolower(c);
        });
        return s1 < s2;
    }
};

// 从编号获取对应的场景
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

// 解释命令的主函数
Command* CommandInterpreter::interpret(const std::string& cmd) {
    std::cout << "class:CommandInterpreter method:interpret\n";
    std::istringstream iss(cmd);
    // 利用 istream_iterator，将字符串拆成多个分隔的单词
    std::vector<std::string> words {
        std::istream_iterator<std::string>{iss},
        std::istream_iterator<std::string>{}
    };
    typedef std::vector<std::string> string_vec;
    typedef std::function<Command*(const string_vec&, const std::string&)> handler_type;
    // 为了书写简洁引入的临时宏定义
#define FUNC [](const string_vec& vec, const std::string& cmd) -> Command*
    // 命令和对应函数的列表
    static std::map<std::string, handler_type, CaseInsensitiveLess> handlers {
        {"list", FUNC { return new ListCommand; }},
        {"quit", FUNC { return new QuitCommand; }},
        {"help", FUNC { return new HelpCommand; }},
        {"show", FUNC {
            if (vec.size() < 2) {
                return new ErrorCommand(cmd);
            }
            auto scene = getSceneById(std::atoi(vec[1].c_str()));
            if (scene == nullptr) {
                return new ErrorCommand(cmd);
            } else {
                return new ShowCommand(scene);
            }
        }},
        {"kill", FUNC {
            if (vec.size() < 3) {
                return new ErrorCommand(cmd);
            }
            auto scene = getSceneById(std::atoi(vec[1].c_str()));
            if (scene == nullptr) {
                return new ErrorCommand(cmd);
            }
            auto entity = scene->remove(std::atoi(vec[2].c_str()));
            if (entity == nullptr) {
                return new ErrorCommand(cmd);
            }
            return new KillCommand(
                entity, &(Application::instance().getMap().getPlayer())
            );
        }},
        {"plant", FUNC {
            if (vec.size() < 2) {
                return new ErrorCommand(cmd);
            }
            auto scene = getSceneById(std::atoi(vec[1].c_str()));
            if (scene == nullptr) {
                return new ErrorCommand(cmd);
            } else {
                return new PlantCommand(scene);
            }
        }},
        {"status", FUNC { return new StatusCommand(
            &(Application::instance().getMap().getPlayer())
        );}}
    };
#undef FUNC
    // 防止空白命令
    if (words.size() == 0) {
        return new ErrorCommand("(empty command)");
    } else if (handlers.find(words[0]) != handlers.cend()) {
        return handlers[words[0]](words, cmd);
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
