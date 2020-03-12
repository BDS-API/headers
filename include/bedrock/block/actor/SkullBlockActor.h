#pragma once

#include "BlockActor.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../../nbt/CompoundTag.h"
#include "../unmapped/BlockSource.h"
#include "../../util/BlockPos.h"


class SkullBlockActor : BlockActor {

public:
    ~SkullBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &)const;
    void setSkullType(int);
    void setRotation(float);
    void getRotation()const;
    void getSkullType()const;
    void getMouthAnimation(float);
//  void setSkullType(SkullBlockActor::SkullType); //TODO: incomplete function definition
    SkullBlockActor(BlockPos const&);
};
