#pragma once

#include "BlockActor.h"


class SkullBlockActor : BlockActor {

public:
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &);
    ~SkullBlockActor();
    virtual void getUpdatePacket(BlockSource &);
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &);
    virtual void tick(BlockSource &);
    virtual void save(CompoundTag &)const;
    virtual void onChanged(BlockSource &);
    void getRotation()const;
//  void setSkullType(SkullBlockActor::SkullType); //TODO: incomplete function definition
    void getSkullType()const;
    SkullBlockActor(BlockPos const&);
    void setRotation(float);
    void getMouthAnimation(float);
    void setSkullType(int);
};
