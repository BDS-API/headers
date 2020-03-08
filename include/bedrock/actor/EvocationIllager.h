#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"


class EvocationIllager : HumanoidMonster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    EvocationIllager::~EvocationIllager()
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    virtual void die(ActorDamageSource const&);
    virtual void aiStep();
    virtual bool isAlliedTo(Mob *);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
