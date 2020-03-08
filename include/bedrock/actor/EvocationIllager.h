#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class EvocationIllager : HumanoidMonster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EvocationIllager::~EvocationIllager()
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    virtual void die(ActorDamageSource const&);
    virtual void aiStep();
    virtual bool isAlliedTo(Mob *);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
