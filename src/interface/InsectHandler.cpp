#include "InsectHandler.h"
#include <iostream>

InsectHandler::InsectHandler() {
    nameList.push_back("dragonfly");
    nameList.push_back("ladybug");
}


void InsectHandler::handleRequest(std::string name) {
    for (auto i : nameList) {
        if (i == name) {
            std::cout << "class::InsectHandler  method::handleRequest\n";
        }
    }
    if (myHandler != nullptr) {
        myHandler->handleRequest(name);
    }
}

void InsectHandler::setNextRequest(AnimalHandler* handler) {
    myHandler = handler;
}
