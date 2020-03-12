#pragma once

#include "BlockActor.h"


class ComparatorBlockActor : BlockActor {

public:
    ~ComparatorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void setOutputSignal(int);
    virtual void save(CompoundTag &)const;
    virtual void getOutputSignal();
    virtual void tick(BlockSource &);
    ComparatorBlockActor(BlockPos const&);
};
