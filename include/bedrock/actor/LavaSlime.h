#pragma once

#include "Slime.h"


class LavaSlime : Slime {

public:
    virtual bool isOnFire()const;
    virtual void doPlayLandSound();
    virtual void getArmorValue();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void checkSpawnRules(bool);
    virtual bool canDealDamage();
    virtual void jumpFromGround();
    ~LavaSlime();
    virtual void getBrightness(float)const;
    virtual bool isInLava()const;
    virtual void createChild(int);
    virtual void decreaseSquish();
    LavaSlime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
