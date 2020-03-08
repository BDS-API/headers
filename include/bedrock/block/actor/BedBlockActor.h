#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../../unmapped/DataLoadHelper"


class BedBlockActor : BlockActor {

public:
    virtual BedBlockActor::~BedBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    void getColorIndex()const;
    BedBlockActor(BlockPos const&);
    void startSleepingOn();
    void stopSleepingOn(BlockSource &, bool);
    void claimPetSleepOnBed(ActorUniqueID);
    void setColorIndex(int);
};
