#pragma once

#include "unmapped/ActorDefinitionGroup"
#include "../util/BlockPos"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"


class EyeOfEnder : Actor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual EyeOfEnder::~EyeOfEnder()
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;

    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
