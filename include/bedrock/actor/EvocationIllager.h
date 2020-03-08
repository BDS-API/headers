#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "damagesource/ActorDamageSource"


class EvocationIllager : HumanoidMonster {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EvocationIllager::~EvocationIllager();
    virtual void getRidingHeight(void);
    virtual bool canExistInPeaceful(void)const;
    virtual void die(ActorDamageSource const&);
    virtual void aiStep(void);
    virtual bool isAlliedTo(Mob *);
    virtual void getArmorValue(void);
    virtual void useNewAi(void)const;

    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
