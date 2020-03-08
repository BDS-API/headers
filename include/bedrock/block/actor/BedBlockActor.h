#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/ActorUniqueID"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class BedBlockActor : BlockActor {

public:
    virtual BedBlockActor::~BedBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getName[abi:cxx11](void)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    void getColorIndex(void)const;
    BedBlockActor(BlockPos const&);
    void startSleepingOn(void);
    void stopSleepingOn(BlockSource &, bool);
    void claimPetSleepOnBed(ActorUniqueID);
    void setColorIndex(int);
};
