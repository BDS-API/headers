#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "damagesource/ActorDamageSource"


class WitherSkull : Fireball {

public:
    virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&);
    virtual WitherSkull::~WitherSkull();
    virtual bool isPickable(void);
    virtual bool isOnFire(void)const;
    virtual bool canDestroyBlock(Block const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getInertia(void);

    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDangerous(bool);
    bool isDangerous(void);
};
