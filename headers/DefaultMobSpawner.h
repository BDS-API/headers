#pragma once

class DefaultMobSpawner : BaseMobSpawner {

    virtual ~DefaultMobSpawner();
    virtual ~DefaultMobSpawner();
    virtual void tick(BlockSource &);
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);
    virtual void getPos(void);
}
