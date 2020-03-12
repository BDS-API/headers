#pragma once

#include "Actor.h"


class EyeOfEnder : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;
    ~EyeOfEnder();
    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
