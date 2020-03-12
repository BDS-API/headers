#pragma once

#include <string>
#include "../Actor.h"
#include "../Mob.h"
#include "../../../unmapped/SummonSpellData.h"
#include "Goal.h"
#include <vector>
#include "../unmapped/ActorDefinitionIdentifier.h"


class SummonActorGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    virtual void tick();
    virtual void stop();
    virtual bool canUse();
    ~SummonActorGoal();
    virtual void start();
    void _getCurrentSpell()const;
    SummonActorGoal(Mob &, std::vector<SummonSpellData> const&);
    void _selectBestSpell(Actor &)const;
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const;
};
