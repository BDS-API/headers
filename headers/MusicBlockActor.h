#pragma once

class MusicBlockActor : BlockActor {

public:
    virtual ~MusicBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    void MusicBlockActor(BlockPos const&);
    void tune(void);
    void playNote(BlockSource &, BlockPos const&);
};
