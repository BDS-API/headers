#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"


class BellBlockActor : BlockActor {

public:
    ~BellBlockActor();
    virtual void tick(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    BellBlockActor(BlockPos const&);
    bool isRinging()const;
    void ejectItem(BlockPos const&, Actor &)const;
//  void ring(Direction::Type, BlockSource &, bool); //TODO: incomplete function definition
};
