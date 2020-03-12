#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../util/BlockPos.h"


class BedBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getName()const;
    virtual void onPlace(BlockSource &);
    virtual void onChanged(BlockSource &);
    ~BedBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void tick(BlockSource &);
    void startSleepingOn();
    BedBlockActor(BlockPos const&);
    void claimPetSleepOnBed(ActorUniqueID);
    void stopSleepingOn(BlockSource &, bool);
    void setColorIndex(int);
    void getColorIndex()const;
};
