#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/damagesource/ActorDamageSource.h"
#include "../bedrock/actor/unmapped/ActorEventListener.h"
#include "../bedrock/level/LevelEventListener.h"
#include "../bedrock/block/unmapped/BlockSource.h"
#include "../bedrock/util/AABB.h"
#include "../bedrock/actor/Actor.h"
#include "./PlayerEventListener.h"
#include "../bedrock/block/unmapped/BlockEventListener.h"
#include "../bedrock/actor/Player.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    virtual ~VanillaServerGameplayEventListener();
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);

    VanillaServerGameplayEventListener();
    void _getGolemList(BlockSource &, AABB const&)const;
};
