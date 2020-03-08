#pragma once

#include "../../../unmapped/DataLoadHelper"
#include "../../util/BlockPos"
#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"


class SkullBlockActor : BlockActor {

public:
    SkullBlockActor::~SkullBlockActor()
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SkullBlockActor(BlockPos const&);
    void getSkullType()const;
    void setSkullType(SkullBlockActor::SkullType);
    void setSkullType(int);
    void getRotation()const;
    void setRotation(float);
    void getMouthAnimation(float);
};
