#pragma once

#include "../../actor/Actor"
#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class BellBlockActor : BlockActor {

public:
    BellBlockActor::~BellBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    BellBlockActor(BlockPos const&);
    void ring(Direction::Type, BlockSource &, bool);
    void ejectItem(BlockPos const&, Actor &)const;
    bool isRinging()const;
};
