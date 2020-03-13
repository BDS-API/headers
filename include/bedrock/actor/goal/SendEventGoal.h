#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SendEventGoal : Goal {

public:
    ~SendEventGoal(); // _ZN13SendEventGoalD2Ev
    virtual bool canUse(); // _ZN13SendEventGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN13SendEventGoal16canContinueToUseEv
    virtual void start(); // _ZN13SendEventGoal5startEv
    virtual void stop(); // _ZN13SendEventGoal4stopEv
    virtual void tick(); // _ZN13SendEventGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK13SendEventGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SendEventGoal(Mob &, std::vector<SendEventData> const&); // _ZN13SendEventGoalC2ER3MobRKSt6vectorI13SendEventDataSaIS3_EE
    void _selectBestSpell(); // _ZN13SendEventGoal16_selectBestSpellEv
    void _getCurrentSpell()const; // _ZNK13SendEventGoal16_getCurrentSpellEv
};
