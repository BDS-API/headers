#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../../unmapped/Occupant"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class BeehiveBlockActor : BlockActor {

public:
    static long TypeId;
    static long MAX_OCCUPANCY;
    static long TypeString[abi:cxx11];

    BeehiveBlockActor::~BeehiveBlockActor()
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
