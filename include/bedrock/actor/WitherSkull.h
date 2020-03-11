#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../../unmapped/VariantParameterList.h"
#include "damagesource/ActorDamageSource.h"
#include "./Fireball.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../../unmapped/Block.h"


class WitherSkull : Fireball {

public:
//  virtual void initializeComponents(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~WitherSkull();
    virtual bool isPickable();
    virtual bool isOnFire()const;
    virtual bool canDestroyBlock(Block const&)const;
    virtual void _hurt(ActorDamageSource const&, int, bool, bool);
    virtual void getInertia();

    WitherSkull(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void setDangerous(bool);
    bool isDangerous();
};
