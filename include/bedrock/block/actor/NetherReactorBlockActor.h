#pragma once

#include "BlockActor.h"


class NetherReactorBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~NetherReactorBlockActor();
    NetherReactorBlockActor(BlockPos const&);
};
