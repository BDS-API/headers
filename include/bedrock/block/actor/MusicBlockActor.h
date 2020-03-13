#pragma once

#include "BlockActor.h"


class MusicBlockActor : BlockActor {

public:
    ~MusicBlockActor(); // _ZN15MusicBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN15MusicBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK15MusicBlockActor4saveER11CompoundTag
    MusicBlockActor(BlockPos const&); // _ZN15MusicBlockActorC2ERK8BlockPos
    void tune(); // _ZN15MusicBlockActor4tuneEv
    void playNote(BlockSource &, BlockPos const&); // _ZN15MusicBlockActor8playNoteER11BlockSourceRK8BlockPos
};
