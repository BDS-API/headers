#pragma once

#include "../Mob"
#include "../Actor"
#include "../../../unmapped/ActorDefinitionIdentifier"


class SummonActorGoal : Goal {

public:
    virtual SummonActorGoal::~SummonActorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SummonActorGoal(Mob &, std::vector<SummonSpellData, std::allocator<SummonSpellData>> const&);
    void _selectBestSpell(Actor &)const;
    void _getCurrentSpell(void)const;
    void _createSpellEntity(float, float, float, float, float, int, ActorDefinitionIdentifier)const;
};
