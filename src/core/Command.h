//
// Command.h
// 和用户交互所需要的命令
//
#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Application;
class Scene;

class CommandInterpreter {
public:
    CommandInterpreter(Application* app);
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
    ~ShowCommand() = default;
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
    ~PlantCommand() = default;
    virtual void execute(void);
private:
    Scene* scene;
};

class ErrorCommand : public Command {
public:
    ErrorCommand(std::string s) : cmd(s) {}
    ~ErrorCommand() = default;
    virtual void execute(void);
private:
    std::string cmd;
};

#endif // COMMAND_H
