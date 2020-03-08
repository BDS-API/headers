#pragma once

#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/Block"
#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionIdentifier"


class WitherSkull : Fireball {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual WitherSkull::~WitherSkull()
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual bool canDestroyBlock(Block const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getInertia();

    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDangerous(bool);
    bool isDangerous();
};
