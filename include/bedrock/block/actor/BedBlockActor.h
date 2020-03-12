#pragma once

#include <string>
#include "BlockActor.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class BedBlockActor : BlockActor {

public:
    virtual std::string getName()const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getCrackEntity(BlockSource &, BlockPos const&);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void onPlace(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void tick(BlockSource &);
    virtual void saveItemInstanceData(CompoundTag &);
    virtual void save(CompoundTag &)const;
    ~BedBlockActor();
    void startSleepingOn();
    void stopSleepingOn(BlockSource &, bool);
    void setColorIndex(int);
    void getColorIndex()const;
    void claimPetSleepOnBed(ActorUniqueID);
    BedBlockActor(BlockPos const&);
};
