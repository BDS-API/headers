#pragma once

#include "BlockActor.h"


class EndGatewayBlockActor : BlockActor {

public:
    static long SPAWN_TIME;
    static long COOLDOWN_TIME;
    static long EVENT_COOLDOWN;

    ~EndGatewayBlockActor(); // _ZN20EndGatewayBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN20EndGatewayBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK20EndGatewayBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN20EndGatewayBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN20EndGatewayBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN20EndGatewayBlockActor15getUpdatePacketER11BlockSource
    virtual void triggerEvent(int, int); // _ZN20EndGatewayBlockActor12triggerEventEii
    virtual bool hasAlphaLayer()const; // _ZNK20EndGatewayBlockActor13hasAlphaLayerEv
    EndGatewayBlockActor(BlockPos const&); // _ZN20EndGatewayBlockActorC2ERK8BlockPos
    bool canTeleport(Actor *, BlockSource &)const; // _ZNK20EndGatewayBlockActor11canTeleportEP5ActorR11BlockSource
    bool isSpawning()const; // _ZNK20EndGatewayBlockActor10isSpawningEv
    bool isCoolingDown()const; // _ZNK20EndGatewayBlockActor13isCoolingDownEv
    void teleportEntity(Actor &); // _ZN20EndGatewayBlockActor14teleportEntityER5Actor
    void getSpawnPercentage()const; // _ZNK20EndGatewayBlockActor18getSpawnPercentageEv
    void getCoolDownPercentage()const; // _ZNK20EndGatewayBlockActor21getCoolDownPercentageEv
    void triggerCooldown(BlockSource &); // _ZN20EndGatewayBlockActor15triggerCooldownER11BlockSource
    void _getHighestSection(WorldGenerator &, BlockVolume &, BlockPos const&); // _ZN20EndGatewayBlockActor18_getHighestSectionER14WorldGeneratorR11BlockVolumeRK8BlockPos
    void findExitPortal(WorldGenerator &, BlockPos const&); // _ZN20EndGatewayBlockActor14findExitPortalER14WorldGeneratorRK8BlockPos
    void getParticleAmount(BlockSource &, BlockPos const&)const; // _ZNK20EndGatewayBlockActor17getParticleAmountER11BlockSourceRK8BlockPos
    void findTallestBlock(BlockSource &, BlockPos const&, int, bool); // _ZN20EndGatewayBlockActor16findTallestBlockER11BlockSourceRK8BlockPosib
    void findValidSpawnAround(BlockSource &, BlockPos const&, bool, int); // _ZN20EndGatewayBlockActor20findValidSpawnAroundER11BlockSourceRK8BlockPosbi
    void _hasRoomForPlayer(BlockSource &, BlockPos const&); // _ZN20EndGatewayBlockActor17_hasRoomForPlayerER11BlockSourceRK8BlockPos
    void setExitPosition(BlockPos const&); // _ZN20EndGatewayBlockActor15setExitPositionERK8BlockPos
    void getExitPosition()const; // _ZNK20EndGatewayBlockActor15getExitPositionEv
    void exitPositionVerified()const; // _ZNK20EndGatewayBlockActor20exitPositionVerifiedEv
};
