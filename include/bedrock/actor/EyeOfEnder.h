#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "./Player.h"


class EyeOfEnder : Actor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~EyeOfEnder();
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;

    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
