#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Player"
#include "../bedrock/level/LevelEventListener"


class VanillaServerGameplayEventListener : ActorEventListener, BlockEventListener, PlayerEventListener, LevelEventListener {

public:
    virtual VanillaServerGameplayEventListener::~VanillaServerGameplayEventListener();
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int);
    virtual void onPlayerHurt(Player &, ActorDamageSource &);
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool);
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float);
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float);

    VanillaServerGameplayEventListener(void);
    void _getGolemList(BlockSource &, AABB const&)const;
};
