#pragma once

#include "HumanoidMonster.h"


class EvocationIllager : HumanoidMonster {

public:
    virtual void getRidingHeight();
    ~EvocationIllager();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool canExistInPeaceful()const;
    virtual void die(ActorDamageSource const&);
    virtual void useNewAi()const;
    virtual void getArmorValue();
    virtual void aiStep();
    virtual bool isAlliedTo(Mob *);
    EvocationIllager(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
