#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class MobSpawnerBlockActor : BlockActor {

public:
    ~MobSpawnerBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    void getSpawner();
    MobSpawnerBlockActor(BlockPos const&);
};
