#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"
#include <string>


class EnchantingTableBlockActor : BlockActor {

public:
    virtual ~EnchantingTableBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual std::string getName()const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    EnchantingTableBlockActor(BlockPos const&);
};
