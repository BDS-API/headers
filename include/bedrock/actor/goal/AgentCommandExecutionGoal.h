#pragma once

#include <string>
#include "Goal.h"


class AgentCommandExecutionGoal : Goal {

public:
    ~AgentCommandExecutionGoal(); // _ZN25AgentCommandExecutionGoalD2Ev
    virtual bool canUse(); // _ZN25AgentCommandExecutionGoal6canUseEv
    virtual bool canBeInterrupted(); // _ZN25AgentCommandExecutionGoal16canBeInterruptedEv
    virtual void start(); // _ZN25AgentCommandExecutionGoal5startEv
    virtual void stop(); // _ZN25AgentCommandExecutionGoal4stopEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK25AgentCommandExecutionGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    AgentCommandExecutionGoal(Mob &); // _ZN25AgentCommandExecutionGoalC2ER3Mob
};
