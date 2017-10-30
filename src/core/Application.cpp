#include "Application.h"
#include "Player.h"
#include "Command.h"
#include <memory>
#include <string>
#include <iostream>

void Application::run(void) {
    std::cout << "class:Application method:run\n";
    std::cout << "Welcome to Happy Farm game.\n";
    exitFlag = false;
    std::string command;
    CommandInterpreter intp;

    // exitFlag 是退出标志，可以通过另外的方法进行修改
    while (!exitFlag) {
        std::cout << '\n';
        std::getline(std::cin, command);
        
        // 智能指针，保证作用域结束之后内存会被释放
        std::unique_ptr<Command> p(intp.interpret(command));
        p->execute();
    }
}
