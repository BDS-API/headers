#pragma once

#include "BlockActor.h"


class EndGatewayBlockActor : BlockActor {

public:
    static long SPAWN_TIME;
    static long COOLDOWN_TIME;
    static long EVENT_COOLDOWN;

    virtual void getUpdatePacket(BlockSource &);
    virtual void tick(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void onChanged(BlockSource &);
    virtual bool hasAlphaLayer()const;
    ~EndGatewayBlockActor();
    void findValidSpawnAround(BlockSource &, BlockPos const&, bool, int);
    void triggerCooldown(BlockSource &);
    void findTallestBlock(BlockSource &, BlockPos const&, int, bool);
    bool canTeleport(Actor *, BlockSource &)const;
    void teleportEntity(Actor &);
    void findExitPortal(WorldGenerator &, BlockPos const&);
    void getExitPosition()const;
    void exitPositionVerified()const;
    void setExitPosition(BlockPos const&);
    void getParticleAmount(BlockSource &, BlockPos const&)const;
    bool isCoolingDown()const;
    bool isSpawning()const;
    void getSpawnPercentage()const;
    void getCoolDownPercentage()const;
    EndGatewayBlockActor(BlockPos const&);
    void _getHighestSection(WorldGenerator &, BlockVolume &, BlockPos const&);
    void _hasRoomForPlayer(BlockSource &, BlockPos const&);
};
