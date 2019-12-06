#pragma once

class AgentCommands::InspectCommand : AgentCommands::Command {

public:
    virtual ~InspectCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    void InspectCommand(Player &, AgentCommands::Direction);
};
