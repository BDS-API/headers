#pragma once

#include <memory>
#include "../Command.h"
#include <string>
#include <functional>


class AgentCommand : Command {

public:
    ~AgentCommand();
    virtual void execute(CommandOrigin const&, CommandOutput &)const;
    void getPosition(CommandOrigin const&, CommandOutput &)const;
    void place(CommandOrigin const&, CommandOutput &)const;
    void runAgentCommand(CommandOrigin const&, CommandOutput &, std::function<std::unique_ptr<AgentCommands::Command> (Player &)>)const;
    void setItem(CommandOrigin const&, CommandOutput &)const;
    void itemCommand(CommandOrigin const&, CommandOutput &)const;
    AgentCommand();
    void tpAgent(Player &, CommandOrigin const&, CommandOutput &)const;
    void setup(CommandRegistry &);
    void setAgentOwner(Agent &, Player &)const;
    void reportSuccess(bool, CommandOutput &)const;
    void collect(CommandOrigin const&, CommandOutput &)const;
    std::string errorName()const;
    bool isValidSlot(int)const;
    void validateRange(Agent *, CommandOrigin const&, CommandOutput &);
    void createAgentOutputSuccess(CommandOutput &, bool)const;
    void transfer(CommandOrigin const&, CommandOutput &)const;
    void drop(CommandOrigin const&, CommandOutput &)const;
    std::string successName()const;
    void directionCommand(CommandOrigin const&, CommandOutput &)const;
    void createAgent(Player &, CommandOrigin const&, CommandOutput &)const;
};
