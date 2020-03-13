#pragma once

#include <string>
#include "../unmapped/ActorDefinitionIdentifier.h"
#include "Goal.h"
#include <vector>


class SummonActorGoal : Goal {

public:
    ~SummonActorGoal(); // _ZN15SummonActorGoalD2Ev
    virtual bool canUse(); // _ZN15SummonActorGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN15SummonActorGoal16canContinueToUseEv
    virtual void start(); // _ZN15SummonActorGoal5startEv
    virtual void stop(); // _ZN15SummonActorGoal4stopEv
    virtual void tick(); // _ZN15SummonActorGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK15SummonActorGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SummonActorGoal(Mob &, std::vector<SummonSpellData> const&); // _ZN15SummonActorGoalC2ER3MobRKSt6vectorI15SummonSpellDataSaIS3_EE
    void _selectBestSpell(Actor &)const; // _ZNK15SummonActorGoal16_selectBestSpellER5Actor
    void _getCurrentSpell()const; // _ZNK15SummonActorGoal16_getCurrentSpellEv
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const; // _ZNK15SummonActorGoal18_createSpellEntityEfffffi25ActorDefinitionIdentifier
};
