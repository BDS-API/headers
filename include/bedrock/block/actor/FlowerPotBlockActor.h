#pragma once

#include "BlockActor.h"


class FlowerPotBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~FlowerPotBlockActor();
    void setPlantItem(Block const*);
    void getPlantItem()const;
    FlowerPotBlockActor(BlockPos const&);
};
