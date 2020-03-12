#pragma once

#include "BlockActor.h"


class BellBlockActor : BlockActor {

public:
    virtual void tick(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    ~BellBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    bool isRinging()const;
    void ejectItem(BlockPos const&, Actor &)const;
    BellBlockActor(BlockPos const&);
//  void ring(Direction::Type, BlockSource &, bool); //TODO: incomplete function definition
};
