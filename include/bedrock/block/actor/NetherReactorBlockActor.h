#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"


class NetherReactorBlockActor : BlockActor {

public:
    virtual ~NetherReactorBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    NetherReactorBlockActor(BlockPos const&);
};
