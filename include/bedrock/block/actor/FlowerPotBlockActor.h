#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../../unmapped/Block"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class FlowerPotBlockActor : BlockActor {

public:
    FlowerPotBlockActor::~FlowerPotBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
    void getPlantItem()const;
};
