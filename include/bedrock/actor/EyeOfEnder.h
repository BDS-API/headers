#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../../unmapped/Vec3"


class EyeOfEnder : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EyeOfEnder::~EyeOfEnder();
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;

    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
