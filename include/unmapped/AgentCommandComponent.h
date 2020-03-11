#pragma once

#include "../bedrock/command/Command.h"
#include "../bedrock/actor/Actor.h"
#include <memory>
#include "./AgentCommandComponent.h"


class AgentCommandComponent {

public:

    ~AgentCommandComponent();
    AgentCommandComponent(AgentCommandComponent &&);
    AgentCommandComponent();
    void initFromDefinition(Actor &);
    void getCurrentCommand()const;
    void getWaitForNextCommandTicks();
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
    bool hasCommand();
    void addCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
};
