#pragma once

#include "../../unmapped/VariantParameterList"
#include "unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/Block"


class WitherSkull : Fireball {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    WitherSkull::~WitherSkull()
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual bool canDestroyBlock(Block const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getInertia();

    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDangerous(bool);
    bool isDangerous();
};
