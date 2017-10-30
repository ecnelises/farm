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

// 命令解释器，实现了解释器模式
class CommandInterpreter {
public:
    CommandInterpreter();
    Command* interpret(const std::string& cmd);
};

// 实现命令模式的基类
class Command {
public:
    virtual ~Command() = default;
    virtual void execute(void) = 0;
};

// 列出所有场景的命令
class ListCommand : public Command {
public:
    virtual void execute(void);
};

// 查看某个场景的命令
class ShowCommand : public Command {
public:
    ShowCommand(Scene* e) : scene(e) {}
    virtual ~ShowCommand() = default;
    virtual void execute(void);
private:
    Scene* scene;
};

// 查看帮助的命令
class HelpCommand : public Command {
public:
    virtual void execute(void);
};

// 退出程序的命令
class QuitCommand : public Command {
public:
    virtual void execute(void);
};

// 生成作物的命令
class PlantCommand : public Command {
public:
    PlantCommand(Scene* e) : scene(e) {}
    virtual ~PlantCommand() = default;
    virtual void execute(void);
private:
    Scene* scene;
};

// 采割作物的命令
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

// 查看背包的命令
class StatusCommand : public Command {
public:
    StatusCommand(Player* plyr) : player(plyr) {}
    virtual ~StatusCommand() = default;
    virtual void execute(void);
private:
    Player* player;
};

#endif // COMMAND_H
