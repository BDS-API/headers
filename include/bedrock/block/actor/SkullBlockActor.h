#pragma once

#include "../../../unmapped/BlockPos"
#include "../../level/Level"
#include "../../../unmapped/BlockSource"
#include "../../nbt/CompoundTag"


class SkullBlockActor : BlockActor {

public:
    virtual SkullBlockActor::~SkullBlockActor();
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    virtual void save(CompoundTag &)const;
    virtual void tick(BlockSource &);
    virtual void onChanged(BlockSource &);
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);

    SkullBlockActor(BlockPos const&);
    void getSkullType(void)const;
    void setSkullType(SkullBlockActor::SkullType);
    void setSkullType(int);
    void getRotation(void)const;
    void setRotation(float);
    void getMouthAnimation(float);
};
