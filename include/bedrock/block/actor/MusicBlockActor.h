#pragma once

class MusicBlockActor : BlockActor {

public:
    virtual MusicBlockActor::~MusicBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    MusicBlockActor(BlockPos const&);
    void tune(void);
    void playNote(BlockSource &, BlockPos const&);
};
