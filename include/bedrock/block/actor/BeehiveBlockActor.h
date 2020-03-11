#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../actor/Actor.h"
#include "../../level/Level.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../../unmapped/Occupant.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"


class BeehiveBlockActor : BlockActor {

public:
    static long TypeId;
    static long MAX_OCCUPANCY;
    static std::string TypeString;

    virtual ~BeehiveBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);

    BeehiveBlockActor(BlockPos const&);
    void _trySpawnBees(BlockSource &);
    void saveUserData(CompoundTag &)const;
    void tryAdmit(Actor &);
    bool isFullyOccupied();
    void evictAll(BlockSource &, bool);
    void _findFreeDirections(BlockSource &, unsigned char, unsigned long);
    void _revive(BlockSource &, BeehiveBlockActor::Occupant const&, unsigned char);
    void disableBeeSpawn();
    void getNumberOfOccupants()const;
    void _isUsableAsSpawnBlock(BlockSource &, unsigned char);
};
