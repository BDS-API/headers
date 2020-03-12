#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class EnchantingTableBlockActor : BlockActor {

public:
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    ~EnchantingTableBlockActor();
    virtual void save(CompoundTag &)const;
    virtual std::string getName()const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void tick(BlockSource &);
    EnchantingTableBlockActor(BlockPos const&);
};
