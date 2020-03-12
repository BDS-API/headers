#pragma once

#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Fireball.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/Block.h"
#include "damagesource/ActorDamageSource.h"


class WitherSkull : Fireball {

public:
    virtual bool canDestroyBlock(Block const&)const;
    ~WitherSkull();
    virtual bool isOnFire()const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual bool isPickable();
    virtual void getInertia();
    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    bool isDangerous();
    void setDangerous(bool);
};
