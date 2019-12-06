#pragma once

class SmallFireball : Fireball {

public:
    virtual ~SmallFireball();
    virtual bool isPickable(void);
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);

    void SmallFireball(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
