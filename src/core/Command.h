//
// Command.h
// 和用户交互所需要的命令
//
#ifndef COMMAND_H
#define COMMAND_H

#include "Entity.h"
#include "Player.h"
#include <string>

class Application;
class Scene;
class Command;

class CommandInterpreter {
public:
    CommandInterpreter();
    Command* interpret(const std::string& cmd);
};

class Command {
public:
    virtual ~Command() = default;
    virtual void execute(void) = 0;
};

class ListCommand : public Command {
public:
    virtual void execute(void);
};

class ShowCommand : public Command {
public:
    ShowCommand(Scene* e) : scene(e) {}
    virtual ~ShowCommand() = default;
    virtual void execute(void);
private:
    Scene* scene;
};

class HelpCommand : public Command {
public:
    virtual void execute(void);
};

class QuitCommand : public Command {
public:
    virtual void execute(void);
};

class PlantCommand : public Command {
public:
    PlantCommand(Scene* e) : scene(e) {}
    virtual ~PlantCommand() = default;
    virtual void execute(void);
private:
    Scene* scene;
};

class KillCommand : public Command {
public:
    KillCommand(Entity* e, Player* plyr) : entity(e), player(plyr) {}
    virtual ~KillCommand() { delete entity; }
    virtual void execute(void);
private:
    Entity* entity;
    Player* player;
};

class ErrorCommand : public Command {
public:
    ErrorCommand(std::string s) : cmd(s) {}
    virtual ~ErrorCommand() = default;
    virtual void execute(void);
private:
    std::string cmd;
};

class StatusCommand : public Command {
public:
    StatusCommand(Player* plyr) : player(plyr) {}
    virtual ~StatusCommand() = default;
    virtual void execute(void);
private:
    Player* player;
};

#endif // COMMAND_H
