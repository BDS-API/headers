#pragma once

#include "../bedrock/actor/damagesource/ActorDamageSource"
#include "../bedrock/level/LevelEventListener"
#include "../bedrock/actor/Actor"
#include "../bedrock/actor/unmapped/ActorEventListener"
#include "../bedrock/util/Vec3"
#include "../bedrock/block/unmapped/BlockEventListener"
#include "../bedrock/util/BlockPos"
#include "../bedrock/block/unmapped/BlockSource"
#include "../bedrock/actor/Player"
#include "../bedrock/util/AABB"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener()
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);

    VanillaServerGameplayEventListener(void);
    void _getGolemList(BlockSource &, AABB const&)const;
};
