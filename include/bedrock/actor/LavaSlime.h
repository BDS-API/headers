#pragma once

#include "Slime.h"


class LavaSlime : Slime {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN9LavaSlime15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~LavaSlime(); // _ZN9LavaSlimeD2Ev
    virtual bool isInLava()const; // _ZNK9LavaSlime8isInLavaEv
    virtual void getBrightness(float)const; // _ZNK9LavaSlime13getBrightnessEf
    virtual bool isOnFire()const; // _ZNK9LavaSlime8isOnFireEv
    virtual void checkSpawnRules(bool); // _ZN9LavaSlime15checkSpawnRulesEb
    virtual void getArmorValue(); // _ZN9LavaSlime13getArmorValueEv
    virtual void jumpFromGround(); // _ZN9LavaSlime14jumpFromGroundEv
    virtual bool canDealDamage(); // _ZN9LavaSlime13canDealDamageEv
    virtual void doPlayLandSound(); // _ZN9LavaSlime15doPlayLandSoundEv
    virtual void decreaseSquish(); // _ZN9LavaSlime14decreaseSquishEv
    virtual void createChild(int); // _ZN9LavaSlime11createChildEi
    LavaSlime(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN9LavaSlimeC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
