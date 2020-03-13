#pragma once

#include "BlockActor.h"


class SkullBlockActor : BlockActor {

public:
    ~SkullBlockActor(); // _ZN15SkullBlockActorD2Ev
    virtual void load(Level &, CompoundTag const&, DataLoadHelper &); // _ZN15SkullBlockActor4loadER5LevelRK11CompoundTagR14DataLoadHelper
    virtual void save(CompoundTag &)const; // _ZNK15SkullBlockActor4saveER11CompoundTag
    virtual void tick(BlockSource &); // _ZN15SkullBlockActor4tickER11BlockSource
    virtual void onChanged(BlockSource &); // _ZN15SkullBlockActor9onChangedER11BlockSource
    virtual void getUpdatePacket(BlockSource &); // _ZN15SkullBlockActor15getUpdatePacketER11BlockSource
    virtual void _onUpdatePacket(CompoundTag const&, BlockSource &); // _ZN15SkullBlockActor15_onUpdatePacketERK11CompoundTagR11BlockSource
    SkullBlockActor(BlockPos const&); // _ZN15SkullBlockActorC2ERK8BlockPos
    void getSkullType()const; // _ZNK15SkullBlockActor12getSkullTypeEv
//  void setSkullType(SkullBlockActor::SkullType); //TODO: incomplete function definition // _ZN15SkullBlockActor12setSkullTypeENS_9SkullTypeE
    void setSkullType(int); // _ZN15SkullBlockActor12setSkullTypeEi
    void getRotation()const; // _ZNK15SkullBlockActor11getRotationEv
    void setRotation(float); // _ZN15SkullBlockActor11setRotationEf
    void getMouthAnimation(float); // _ZN15SkullBlockActor17getMouthAnimationEf
};
