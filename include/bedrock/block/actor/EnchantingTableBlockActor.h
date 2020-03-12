#pragma once

#include <string>
#include "BlockActor.h"


class EnchantingTableBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void getUpdatePacket(BlockSource &);
    virtual void tick(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual std::string getName()const;
    ~EnchantingTableBlockActor();
    EnchantingTableBlockActor(BlockPos const&);
};
