#pragma once

#include "Fireball.h"


class SmallFireball : Fireball {

public:
    ~SmallFireball(); // _ZN13SmallFireballD2Ev
    virtual bool isPickable(); // _ZN13SmallFireball10isPickableEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN13SmallFireball5_hurtERK17ActorDamageSourceibb
    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13SmallFireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
