#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"


class LavaSlime : Slime {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual LavaSlime::~LavaSlime();
    virtual bool isInLava(void)const;
    virtual void getBrightness(float)const;
    virtual bool isOnFire(void)const;
    virtual void checkSpawnRules(bool);
    virtual void getArmorValue(void);
    virtual void jumpFromGround(void);
    virtual bool canDealDamage(void);
    virtual void doPlayLandSound(void);
    virtual void decreaseSquish(void);
    virtual void createChild(int);

    LavaSlime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
