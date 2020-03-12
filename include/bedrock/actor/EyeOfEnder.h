#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../util/BlockPos.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"


class EyeOfEnder : Actor {

public:
    virtual void normalTick();
    virtual void lerpMotion(Vec3 const&);
    ~EyeOfEnder();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getShadowRadius()const;
    EyeOfEnder(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void signalTo(Player const&, BlockPos &);
};
