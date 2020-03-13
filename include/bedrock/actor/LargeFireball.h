#pragma once

#include "Fireball.h"


class LargeFireball : Fireball {

public:
    ~LargeFireball(); // _ZN13LargeFireballD2Ev
    LargeFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13LargeFireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void setExplosionPower(int); // _ZN13LargeFireball17setExplosionPowerEi
};
