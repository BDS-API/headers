#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../unmapped/BlockSource.h"
#include <string>


class BedBlockActor : BlockActor {

public:
    virtual ~BedBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual std::string getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    void getColorIndex()const;
    BedBlockActor(BlockPos const&);
    void startSleepingOn();
    void stopSleepingOn(BlockSource &, bool);
    void claimPetSleepOnBed(ActorUniqueID);
    void setColorIndex(int);
};
