#pragma once

#include "../unmapped/BlockVolume"
#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../level/generator/WorldGenerator"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class EndGatewayBlockActor : BlockActor {

public:
    static long SPAWN_TIME;
    static long COOLDOWN_TIME;
    static long EVENT_COOLDOWN;

    EndGatewayBlockActor::~EndGatewayBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void triggerEvent(int, int);
    virtual bool hasAlphaLayer()const;

    EndGatewayBlockActor(BlockPos const&);
    bool canTeleport(Actor *, BlockSource &)const;
    bool isSpawning()const;
    bool isCoolingDown()const;
    void teleportEntity(Actor &);
    void getSpawnPercentage()const;
    void getCoolDownPercentage()const;
    void triggerCooldown(BlockSource &);
    void _getHighestSection(WorldGenerator &, BlockVolume &, BlockPos const&);
    void findExitPortal(WorldGenerator &, BlockPos const&);
    void getParticleAmount(BlockSource &, BlockPos const&)const;
    void findTallestBlock(BlockSource &, BlockPos const&, int, bool);
    void findValidSpawnAround(BlockSource &, BlockPos const&, bool, int);
    void _hasRoomForPlayer(BlockSource &, BlockPos const&);
    void setExitPosition(BlockPos const&);
    void getExitPosition()const;
    void exitPositionVerified()const;
};
