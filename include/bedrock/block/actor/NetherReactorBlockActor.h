#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class NetherReactorBlockActor : BlockActor {

public:
    NetherReactorBlockActor::~NetherReactorBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    NetherReactorBlockActor(BlockPos const&);
};
