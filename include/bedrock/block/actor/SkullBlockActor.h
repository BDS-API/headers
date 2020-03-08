#pragma once

#include "../unmapped/BlockSource"
#include "../../nbt/CompoundTag"
#include "../../level/Level"
#include "../../util/BlockPos"
#include "../../../unmapped/DataLoadHelper"


class SkullBlockActor : BlockActor {

public:
    virtual SkullBlockActor::~SkullBlockActor()
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
