#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class MusicBlockActor : BlockActor {

public:
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~MusicBlockActor();
    MusicBlockActor(BlockPos const&);
    void tune();
    void playNote(BlockSource &, BlockPos const&);
};
