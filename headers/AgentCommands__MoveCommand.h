#pragma once

class AgentCommands::MoveCommand : AgentCommands::Command {

public:
    virtual ~MoveCommand();
    virtual void execute(void);
    virtual bool isDone(void);
    virtual void tick(void);

    void MoveCommand(Player &, AgentCommands::Direction);
    void _reachedPosition(void);
};
