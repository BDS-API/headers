#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class EnchantingTableBlockActor : BlockActor {

public:
    EnchantingTableBlockActor::~EnchantingTableBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    EnchantingTableBlockActor(BlockPos const&);
};
