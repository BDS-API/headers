#pragma once

#include <string>
#include "../unmapped/ActorDefinitionIdentifier.h"
#include "Goal.h"
#include <vector>


class SummonActorGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void start();
    ~SummonActorGoal();
    virtual bool canUse();
    void _getCurrentSpell()const;
    SummonActorGoal(Mob &, std::vector<SummonSpellData> const&);
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const;
    void _selectBestSpell(Actor &)const;
};
