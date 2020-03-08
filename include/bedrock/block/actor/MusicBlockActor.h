#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class MusicBlockActor : BlockActor {

public:
    virtual MusicBlockActor::~MusicBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    MusicBlockActor(BlockPos const&);
    void tune();
    void playNote(BlockSource &, BlockPos const&);
};
