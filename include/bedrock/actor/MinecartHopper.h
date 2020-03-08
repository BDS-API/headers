#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "damagesource/ActorDamageSource"


class MinecartHopper : Minecart {

public:
    virtual MinecartHopper::~MinecartHopper();
    virtual void destroy(ActorDamageSource const&, bool);
    virtual void getType(void);
    virtual void getDefaultDisplayBlock(void)const;
    virtual void getDefaultDisplayOffset(void)const;
    virtual void applyNaturalSlowdown(void);

    MinecartHopper(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
