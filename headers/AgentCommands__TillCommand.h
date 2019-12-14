#pragma once

class AgentCommands::TillCommand : AgentCommands::Command {

public:
    virtual ~TillCommand();
    virtual void execute(void);
    virtual bool isDone(void);

    void TillCommand(Player &, std::string, AgentCommands::Direction);
};
