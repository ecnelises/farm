#include "MammalHandler.h"
#include <iostream>

MammalHandler::MammalHandler() {
    nameList.push_back("pig");
    nameList.push_back("sheep");
}

void MammalHandler::handleRequest(std::string name) {
    for (auto i : nameList) {
        if (i == name) {
            std::cout << "class::MammalHandler  method::handleRequest\n";
        }
    }
    if (myHandler != nullptr) {
        myHandler->handleRequest(name);
    }
}

void MammalHandler::setNextRequest(AnimalHandler* handler) {
    myHandler = handler;
}
