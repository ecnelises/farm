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
    while (!exitFlag) {
        std::cout << '\n';
        std::getline(std::cin, command);
        std::unique_ptr<Command> p(intp.interpret(command));
        p->execute();
    }
}
