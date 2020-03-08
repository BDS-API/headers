#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class EnchantingTableBlockActor : BlockActor {

public:
    virtual EnchantingTableBlockActor::~EnchantingTableBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void getName[abi:cxx11](void)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    EnchantingTableBlockActor(BlockPos const&);
};
