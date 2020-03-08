#pragma once

#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class NetherReactorBlockActor : BlockActor {

public:
    virtual NetherReactorBlockActor::~NetherReactorBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    NetherReactorBlockActor(BlockPos const&);
};
