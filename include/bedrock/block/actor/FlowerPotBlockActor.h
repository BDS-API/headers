#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../../unmapped/DataLoadHelper"


class FlowerPotBlockActor : BlockActor {

public:
    virtual FlowerPotBlockActor::~FlowerPotBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
    void getPlantItem()const;
};
