#pragma once

#include "BlockActor.h"


class MusicBlockActor : BlockActor {

public:
    ~MusicBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    void tune();
    MusicBlockActor(BlockPos const&);
    void playNote(BlockSource &, BlockPos const&);
};
