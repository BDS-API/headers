#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../util/BlockPos.h"
#include "../unmapped/BlockSource.h"


class BellBlockActor : BlockActor {

public:
    virtual ~BellBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    BellBlockActor(BlockPos const&);
//  void ring(Direction::Type, BlockSource &, bool); //TODO: incomplete function definition
    void ejectItem(BlockPos const&, Actor &)const;
    bool isRinging()const;
};
