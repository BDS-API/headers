#pragma once

#include "BlockActor.h"
#include "../../level/generator/WorldGenerator.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../unmapped/BlockVolume.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class EndGatewayBlockActor : BlockActor {

public:
    static long SPAWN_TIME;
    static long COOLDOWN_TIME;
    static long EVENT_COOLDOWN;

    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void tick(BlockSource &);
    ~EndGatewayBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual bool hasAlphaLayer()const;
    virtual void triggerEvent(int, int);
    void teleportEntity(Actor &);
    void setExitPosition(BlockPos const&);
    void _getHighestSection(WorldGenerator &, BlockVolume &, BlockPos const&);
    void getParticleAmount(BlockSource &, BlockPos const&)const;
    void getExitPosition()const;
    void findExitPortal(WorldGenerator &, BlockPos const&);
    void exitPositionVerified()const;
    void _hasRoomForPlayer(BlockSource &, BlockPos const&);
    void getSpawnPercentage()const;
    void findValidSpawnAround(BlockSource &, BlockPos const&, bool, int);
    EndGatewayBlockActor(BlockPos const&);
    bool isSpawning()const;
    void findTallestBlock(BlockSource &, BlockPos const&, int, bool);
    bool isCoolingDown()const;
    bool canTeleport(Actor *, BlockSource &)const;
    void triggerCooldown(BlockSource &);
    void getCoolDownPercentage()const;
};
