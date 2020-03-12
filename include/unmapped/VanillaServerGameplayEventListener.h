#pragma once

#include "PlayerEventListener.h"
#include "../bedrock/block/unmapped/BlockEventListener.h"
#include "../bedrock/actor/unmapped/ActorEventListener.h"
#include "../bedrock/level/LevelEventListener.h"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    ~VanillaServerGameplayEventListener();
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    VanillaServerGameplayEventListener();
    void _getGolemList(BlockSource &, AABB const&)const;
};
