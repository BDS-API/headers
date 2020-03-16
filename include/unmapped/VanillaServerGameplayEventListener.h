#pragma once

#include "PlayerEventListener.h"
#include "../bedrock/block/unmapped/BlockEventListener.h"
#include "../bedrock/actor/unmapped/ActorEventListener.h"
#include "../bedrock/level/LevelEventListener.h"


class VanillaServerGameplayEventListener : public ActorEventListener, public BlockEventListener, public PlayerEventListener, public LevelEventListener {

public:
    virtual ~VanillaServerGameplayEventListener(); // _ZN34VanillaServerGameplayEventListenerD2Ev
    virtual void __fake_function0(); // fake
    virtual void onActorHurt(Actor &, ActorDamageSource const&, int, int); // _ZN34VanillaServerGameplayEventListener11onActorHurtER5ActorRK17ActorDamageSourceii
    virtual void onPlayerHurt(Player &, ActorDamageSource &); // _ZN34VanillaServerGameplayEventListener12onPlayerHurtER6PlayerR17ActorDamageSource
    virtual void onBlockPlacedByPlayer(Player &, Block const&, BlockPos const&, bool); // _ZN34VanillaServerGameplayEventListener21onBlockPlacedByPlayerER6PlayerRK5BlockRK8BlockPosb
    virtual void onPlayerMovementCorrected(Player &, Vec3 const&, float, float); // _ZN34VanillaServerGameplayEventListener25onPlayerMovementCorrectedER6PlayerRK4Vec3ff
    virtual void onPlayerMovementAnomaly(Player &, Vec3 const&, float, float); // _ZN34VanillaServerGameplayEventListener23onPlayerMovementAnomalyER6PlayerRK4Vec3ff
    VanillaServerGameplayEventListener(); // _ZN34VanillaServerGameplayEventListenerC2Ev
    void _getGolemList(BlockSource &, AABB const&)const; // _ZNK34VanillaServerGameplayEventListener13_getGolemListER11BlockSourceRK4AABB
};
