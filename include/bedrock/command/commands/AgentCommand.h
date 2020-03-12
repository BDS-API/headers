#pragma once

#include "../origin/CommandOrigin.h"
#include "../CommandRegistry.h"
#include <functional>
#include <memory>
#include "../Command.h"
#include "../CommandOutput.h"
#include "../../actor/Player.h"
#include "../../actor/Agent.h"


class AgentCommand : Command {

public:
    ~AgentCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void transfer(CommandOrigin const&, CommandOutput &)const;
    void createAgent(Player &, CommandOrigin const&, CommandOutput &)const;
    void collect(CommandOrigin const&, CommandOutput &)const;
    void reportSuccess(bool, CommandOutput &)const;
    void validateRange(Agent *, CommandOrigin const&, CommandOutput &);
    void createAgentOutputSuccess(CommandOutput &, bool)const;
    void runAgentCommand(CommandOrigin const&, CommandOutput &, std::function<std::unique_ptr<AgentCommands::Command> (Player &)>)const;
    std::string errorName()const;
    void itemCommand(CommandOrigin const&, CommandOutput &)const;
    void place(CommandOrigin const&, CommandOutput &)const;
    void drop(CommandOrigin const&, CommandOutput &)const;
    void directionCommand(CommandOrigin const&, CommandOutput &)const;
    void tpAgent(Player &, CommandOrigin const&, CommandOutput &)const;
    std::string successName()const;
    bool isValidSlot(int)const;
    void setItem(CommandOrigin const&, CommandOutput &)const;
    AgentCommand();
    void setAgentOwner(Agent &, Player &)const;
    void setup(CommandRegistry &);
    void getPosition(CommandOrigin const&, CommandOutput &)const;
};
