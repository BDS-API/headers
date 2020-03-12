#pragma once

#include "Slime.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"


class LavaSlime : Slime {

public:
    virtual void jumpFromGround();
    virtual bool isInLava()const;
    virtual void doPlayLandSound();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getArmorValue();
    virtual bool isOnFire()const;
    virtual void getBrightness(float)const;
    virtual void createChild(int);
    virtual void decreaseSquish();
    virtual bool canDealDamage();
    ~LavaSlime();
    virtual void checkSpawnRules(bool);
    LavaSlime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
