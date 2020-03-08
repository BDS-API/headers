#pragma once

#include "../../../unmapped/BlockPos"
#include "../../../unmapped/Block"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class FlowerPotBlockActor : BlockActor {

public:
    virtual FlowerPotBlockActor::~FlowerPotBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
    void getPlantItem(void)const;
};
