#pragma once

#include <string>
#include "HangingActor.h"


class Painting : HangingActor {

public:
    ~Painting(); // _ZN8PaintingD2Ev
    virtual void remove(); // _ZN8Painting6removeEv
    virtual void setPos(Vec3 const&); // _ZN8Painting6setPosERK4Vec3
    virtual void getAddPacket(); // _ZN8Painting12getAddPacketEv
    virtual void getShadowRadius()const; // _ZNK8Painting15getShadowRadiusEv
    virtual bool isPickable(); // _ZN8Painting10isPickableEv
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN8Painting22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN8Painting21addAdditionalSaveDataER11CompoundTag
    virtual void getWidth()const; // _ZNK8Painting8getWidthEv
    virtual void getHeight()const; // _ZNK8Painting9getHeightEv
    virtual void dropItem(); // _ZN8Painting8dropItemEv
    virtual void placeHangingEntity(BlockSource &, int); // _ZN8Painting18placeHangingEntityER11BlockSourcei
    Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN8PaintingC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void clientInitialize(int, std::string const&); // _ZN8Painting16clientInitializeEiRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void getCurrentMotive()const; // _ZNK8Painting16getCurrentMotiveEv
};
