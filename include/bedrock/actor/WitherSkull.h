#pragma once

#include "Fireball.h"


class WitherSkull : Fireball {

public:
    ~WitherSkull();
    virtual bool canDestroyBlock(Block const&)const;
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getInertia();
    virtual bool isPickable();
    virtual bool isOnFire()const;
    void setDangerous(bool);
    bool isDangerous();
    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
