#pragma once

class BaseMobSpawner {

    virtual ~BaseMobSpawner();
    virtual ~BaseMobSpawner();
    virtual void tick(BlockSource &);
    virtual void load(CompoundTag const&);
    virtual void save(CompoundTag &);
    virtual void getPos(void);
}
