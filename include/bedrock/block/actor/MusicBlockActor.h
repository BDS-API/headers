#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class MusicBlockActor : BlockActor {

public:
    virtual MusicBlockActor::~MusicBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    MusicBlockActor(BlockPos const&);
    void tune(void);
    void playNote(BlockSource &, BlockPos const&);
};
