#pragma once

#include "../Actor.h"
#include "../../../unmapped/SummonSpellData.h"
#include <memory>
#include "./Goal.h"
#include <vector>
#include "../unmapped/ActorDefinitionIdentifier.h"
#include "../Mob.h"
#include <string>


class SummonActorGoal : Goal {

public:
    virtual ~SummonActorGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SummonActorGoal(Mob &, std::vector<SummonSpellData, std::allocator<SummonSpellData>> const&);
    void _selectBestSpell(Actor &)const;
    void _getCurrentSpell()const;
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const;
};
