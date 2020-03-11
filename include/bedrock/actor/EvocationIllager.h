#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Mob.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "./HumanoidMonster.h"
#include "unmapped/ActorDefinitionGroup.h"


class EvocationIllager : HumanoidMonster {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~EvocationIllager();
    virtual void getRidingHeight();
    virtual bool canExistInPeaceful()const;
    virtual void die(ActorDamageSource const&);
    virtual void aiStep();
    virtual bool isAlliedTo(Mob *);
    virtual void getArmorValue();
    virtual void useNewAi()const;

    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
