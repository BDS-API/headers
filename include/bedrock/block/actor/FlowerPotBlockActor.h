#pragma once

#include "BlockActor.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class FlowerPotBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void onChanged(BlockSource &);
    ~FlowerPotBlockActor();
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    void getPlantItem()const;
    FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
};
