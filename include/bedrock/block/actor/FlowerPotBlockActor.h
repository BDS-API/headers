#pragma once

#include "../../../unmapped/Block.h"
#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"


class FlowerPotBlockActor : BlockActor {

public:
    virtual ~FlowerPotBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    FlowerPotBlockActor(BlockPos const&);
    void setPlantItem(Block const*);
    void getPlantItem()const;
};
