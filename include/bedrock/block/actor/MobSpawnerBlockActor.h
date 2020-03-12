#pragma once

#include "BlockActor.h"


class MobSpawnerBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void tick(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void getUpdatePacket(BlockSource &);
    ~MobSpawnerBlockActor();
    void getSpawner();
    MobSpawnerBlockActor(BlockPos const&);
};
