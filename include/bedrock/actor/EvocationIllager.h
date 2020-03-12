#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "HumanoidMonster.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "Mob.h"
#include "damagesource/ActorDamageSource.h"


class EvocationIllager : HumanoidMonster {

public:
    virtual void die(ActorDamageSource const&);
    virtual void aiStep();
    virtual bool canExistInPeaceful()const;
    virtual void getRidingHeight();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getArmorValue();
    virtual void useNewAi()const;
    ~EvocationIllager();
    virtual bool isAlliedTo(Mob *);
    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
