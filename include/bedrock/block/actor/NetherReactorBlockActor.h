#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../../util/BlockPos.h"


class NetherReactorBlockActor : BlockActor {

public:
    ~NetherReactorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    NetherReactorBlockActor(BlockPos const&);
};
