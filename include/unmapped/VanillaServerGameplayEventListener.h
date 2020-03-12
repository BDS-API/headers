#pragma once

#include "../bedrock/actor/Player.h"
#include "PlayerEventListener.h"
#include "../bedrock/actor/unmapped/ActorEventListener.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "Block.h"
#include "../bedrock/block/unmapped/BlockEventListener.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/level/LevelEventListener.h"
#include "../bedrock/util/AABB.h"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    ~VanillaServerGameplayEventListener();
    VanillaServerGameplayEventListener();
    void _getGolemList(BlockSource &, AABB const&)const;
};
