#pragma once

#include <memory>


class AgentCommandComponent {

public:
    ~AgentCommandComponent(); // _ZN21AgentCommandComponentD2Ev
    AgentCommandComponent(AgentCommandComponent &&); // _ZN21AgentCommandComponentC2EOS_
    AgentCommandComponent(); // _ZN21AgentCommandComponentC2Ev
    void initFromDefinition(Actor &); // _ZN21AgentCommandComponent18initFromDefinitionER5Actor
    void getCurrentCommand()const; // _ZNK21AgentCommandComponent17getCurrentCommandEv
    void getWaitForNextCommandTicks(); // _ZN21AgentCommandComponent26getWaitForNextCommandTicksEv
    void setCurrentCommand(std::unique_ptr<AgentCommands::Command>); // _ZN21AgentCommandComponent17setCurrentCommandESt10unique_ptrIN13AgentCommands7CommandESt14default_deleteIS2_EE
    bool hasCommand(); // _ZN21AgentCommandComponent10hasCommandEv
    void addCommand(std::unique_ptr<AgentCommands::Command>); // _ZN21AgentCommandComponent10addCommandESt10unique_ptrIN13AgentCommands7CommandESt14default_deleteIS2_EE
};
