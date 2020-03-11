#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../unmapped/BlockSource.h"


class MusicBlockActor : BlockActor {

public:
    virtual ~MusicBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;

    MusicBlockActor(BlockPos const&);
    void tune();
    void playNote(BlockSource &, BlockPos const&);
};
