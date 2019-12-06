#pragma once

class AgentCommands::InspectDataCommand : AgentCommands::Command {

public:
    virtual ~InspectDataCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void fireCommandDoneEvent(void);

    void InspectDataCommand(Player &, AgentCommands::Direction);
};
