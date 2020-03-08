#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/command/commands/agent/Command"


class AgentCommandComponent {

public:

    AgentCommandComponent(AgentCommandComponent&&);
    AgentCommandComponent(void);
    void initFromDefinition(Actor &);
    void getCurrentCommand()const;
    void getWaitForNextCommandTicks();
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
    bool hasCommand();
    void addCommand(std::unique_ptr<AgentCommands::Command, std::default_delete<AgentCommands::Command>>);
};
