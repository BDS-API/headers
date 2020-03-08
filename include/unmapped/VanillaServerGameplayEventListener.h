#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Actor"
#include "../bedrock/block/unmapped/BlockEventListener"
#include "../bedrock/actor/Player"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/level/LevelEventListener"
#include "../bedrock/util/AABB"
#include "../bedrock/actor/unmapped/ActorEventListener"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    virtual VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener()
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);

    VanillaServerGameplayEventListener(void);
    void _getGolemList(BlockSource &, AABB const&)const;
};
