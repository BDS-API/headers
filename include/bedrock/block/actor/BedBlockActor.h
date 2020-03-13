#pragma once

#include <string>
#include "BlockActor.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class BedBlockActor : BlockActor {

public:
    ~BedBlockActor(); // _ZN13BedBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN13BedBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK13BedBlockActor4saveER11CompoundTag
    virtual void saveItemInstanceData(CompoundTag &); // _ZN13BedBlockActor20saveItemInstanceDataER11CompoundTag
    virtual void tick(BlockSource &); // _ZN13BedBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN13BedBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN13BedBlockActor15getUpdatePacketER11BlockSource
    virtual void onPlace(BlockSource &); // _ZN13BedBlockActor7onPlaceER11BlockSource
    virtual void getCrackEntity(BlockSource &, BlockPos const&); // _ZN13BedBlockActor14getCrackEntityER11BlockSourceRK8BlockPos
    virtual std::string getName()const; // _ZNK13BedBlockActor7getNameB5cxx11Ev
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN13BedBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    void getColorIndex()const; // _ZNK13BedBlockActor13getColorIndexEv
    BedBlockActor(BlockPos const&); // _ZN13BedBlockActorC2ERK8BlockPos
    void startSleepingOn(); // _ZN13BedBlockActor15startSleepingOnEv
    void stopSleepingOn(BlockSource &, bool); // _ZN13BedBlockActor14stopSleepingOnER11BlockSourceb
    void claimPetSleepOnBed(ActorUniqueID); // _ZN13BedBlockActor18claimPetSleepOnBedE13ActorUniqueID
    void setColorIndex(int); // _ZN13BedBlockActor13setColorIndexEi
};
