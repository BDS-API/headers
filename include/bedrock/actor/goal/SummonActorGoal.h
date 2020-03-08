#pragma once

#include "../Mob"
#include "../Actor"
#include "../unmapped/ActorDefinitionIdentifier"
#include "../../../unmapped/SummonSpellData"


class SummonActorGoal : Goal {

public:
    virtual SummonActorGoal::~SummonActorGoal()
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
