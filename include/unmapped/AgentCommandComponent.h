#pragma once

#include <memory>


class AgentCommandComponent {

public:
    void initFromDefinition(Actor &);
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command>);
    void addCommand(std::unique_ptr<AgentCommands::Command>);
    bool hasCommand();
    AgentCommandComponent();
    void getWaitForNextCommandTicks();
    AgentCommandComponent(AgentCommandComponent &&);
    void getCurrentCommand()const;
    ~AgentCommandComponent();
};
