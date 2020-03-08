#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class MusicBlockActor : BlockActor {

public:
    MusicBlockActor::~MusicBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    MusicBlockActor(BlockPos const&);
    void tune();
    void playNote(BlockSource &, BlockPos const&);
};
