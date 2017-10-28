#include "Application.h"
#include "Player.h"
#include <iostream>

std::string splitUserInput(const std::string& s, const std::string& c, int index) {
	std::vector<std::string> v;
	std::string::size_type pos1, pos2;
	pos2 = s.find(c);
	pos1 = 0;
	while (std::string::npos != pos2) {
		v.push_back(s.substr(pos1, pos2 - pos1));
		pos1 = pos2 + c.size();
		pos2 = s.find(c, pos1);
	}
	if (pos1 != s.length()) {
		v.push_back(s.substr(pos1));
	}
	if (index < v.size()) {
		return v[index];
	}
	else {
		return "";
	}
}

void Application::run(void) {

	std::cout << "Welcome to Happy Farm game.\n";
	bool quit_flag = false;

	std::string userInput;

	while (!quit_flag) {
		std::cout << "Round begins.\n$";
		std::getline(std::cin, userInput);
		std::string command = splitUserInput(userInput, " ", 0);
		std::string object = splitUserInput(userInput, " ", 1);

		if (command == "list") {
			if (object == "scenes") {
				//
			}
			//
			continue;
		}
		if (command == "plant") {
			if (object == "wheat") {
				//
			}
			if (object == "potato") {
				//
			}
			continue;
		}
		if (command == "exit") {
			quit_flag = true;
		}
		if (command == "show") {
			continue;
		}
		if (command == "use") {
			continue;
		}

		std::cout << "fail~ \n";
	}
}
