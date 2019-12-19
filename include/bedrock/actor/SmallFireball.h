#pragma once

class SmallFireball : Fireball {

public:
    virtual SmallFireball::~SmallFireball();
    virtual bool isPickable(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
