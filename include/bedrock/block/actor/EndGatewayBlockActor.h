#pragma once

#include "../unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../level/generator/WorldGenerator"
#include "../../../unmapped/DataLoadHelper"
#include "../unmapped/BlockVolume"


class EndGatewayBlockActor : BlockActor {

public:
    static long SPAWN_TIME;
    static long COOLDOWN_TIME;
    static long EVENT_COOLDOWN;

    virtual EndGatewayBlockActor::~EndGatewayBlockActor()
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
