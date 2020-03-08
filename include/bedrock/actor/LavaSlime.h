#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class LavaSlime : Slime {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual LavaSlime::~LavaSlime()
    virtual bool isInLava()const;
    virtual void getBrightness(float)const;
    virtual bool isOnFire()const;
    virtual void checkSpawnRules(bool);
    virtual void getArmorValue();
    virtual void jumpFromGround();
    virtual bool canDealDamage();
    virtual void doPlayLandSound();
    virtual void decreaseSquish();
    virtual void createChild(int);

    LavaSlime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
