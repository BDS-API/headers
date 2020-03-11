#pragma once

#include "../../nbt/CompoundTag.h"
#include "./BlockActor.h"
#include "../../util/BlockPos.h"
#include "../../../unmapped/DataLoadHelper.h"
#include "../../level/Level.h"
#include "../unmapped/BlockSource.h"


class SkullBlockActor : BlockActor {

public:
    virtual ~SkullBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SkullBlockActor(BlockPos const&);
    void getSkullType()const;
//  void setSkullType(SkullBlockActor::SkullType); //TODO: incomplete function definition
    void setSkullType(int);
    void getRotation()const;
    void setRotation(float);
    void getMouthAnimation(float);
};
