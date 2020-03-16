#pragma once

#include "Fireball.h"


class LargeFireball : public Fireball {

public:
    virtual ~LargeFireball(); // _ZN13LargeFireballD2Ev
    virtual void __fake_function0(); // fake
    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13LargeFireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setExplosionPower(int); // _ZN13LargeFireball17setExplosionPowerEi
};
