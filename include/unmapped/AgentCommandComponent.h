#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/command/Command.h"
#include <memory>


class AgentCommandComponent {

public:
    void getWaitForNextCommandTicks();
    void getCurrentCommand()const;
    void initFromDefinition(Actor &);
    void addCommand(std::unique_ptr<AgentCommands::Command>);
    AgentCommandComponent(AgentCommandComponent &&);
    bool hasCommand();
    AgentCommandComponent();
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command>);
    ~AgentCommandComponent();
};
