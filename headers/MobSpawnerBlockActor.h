#pragma once

class MobSpawnerBlockActor : BlockActor {

public:
    virtual ~MobSpawnerBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void onUpdatePacket(CompoundTag const&, BlockSource &);

    void MobSpawnerBlockActor(BlockPos const&);
    void getSpawner(void);
};
