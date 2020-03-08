#pragma once

#include "../CommandRegistry"
#include "../Command"
#include "../../actor/Agent"
#include "../CommandOutput"
#include "../../actor/Player"
#include "../orgin/CommandOrigin"


class AgentCommand : Command {

public:
    virtual AgentCommand::~AgentCommand()
    virtual void execute(CommandOrigin const&, CommandOutput &)const;

    void setup(CommandRegistry &);
    AgentCommand(void);
    void validateRange(Agent *, CommandOrigin const&, CommandOutput &);
    void runAgentCommand(CommandOrigin const&, CommandOutput &, std::function<std::unique_ptr ()(Player &)>)const;
    void reportSuccess(bool, CommandOutput &)const;
    void createAgent(Player &, CommandOrigin const&, CommandOutput &)const;
    void setAgentOwner(Agent &, Player &)const;
    void createAgentOutputSuccess(CommandOutput &, bool)const;
    void tpAgent(Player &, CommandOrigin const&, CommandOutput &)const;
    void itemCommand(CommandOrigin const&, CommandOutput &)const;
    void transfer(CommandOrigin const&, CommandOutput &)const;
    void drop(CommandOrigin const&, CommandOutput &)const;
    void collect(CommandOrigin const&, CommandOutput &)const;
    void place(CommandOrigin const&, CommandOutput &)const;
    void directionCommand(CommandOrigin const&, CommandOutput &)const;
    void setItem(CommandOrigin const&, CommandOutput &)const;
    void getPosition(CommandOrigin const&, CommandOutput &)const;
    bool isValidSlot(int)const;
};
