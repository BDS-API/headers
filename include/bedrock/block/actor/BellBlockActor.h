#pragma once

#include "../unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class BellBlockActor : BlockActor {

public:
    virtual BellBlockActor::~BellBlockActor()
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
