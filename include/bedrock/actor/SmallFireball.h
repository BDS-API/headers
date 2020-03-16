#pragma once

#include "Fireball.h"


class SmallFireball : public Fireball {

public:
    virtual ~SmallFireball(); // _ZN13SmallFireballD2Ev
    virtual void __fake_function0(); // fake
    virtual bool isPickable(); // _ZN13SmallFireball10isPickableEv
    virtual void _hurt(ActorDamageSource const&, int, bool, bool); // _ZN13SmallFireball5_hurtERK17ActorDamageSourceibb
    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN13SmallFireballC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
};
