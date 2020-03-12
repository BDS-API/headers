#pragma once

#include <string>
#include "HangingActor.h"


class Painting : HangingActor {

public:
    virtual bool isPickable();
    virtual void placeHangingEntity(BlockSource &, int);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void dropItem();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void remove();
    virtual void getShadowRadius()const;
    virtual void setPos(Vec3 const&);
    virtual void getWidth()const;
    virtual void getHeight()const;
    virtual void getAddPacket();
    ~Painting();
    void getCurrentMotive()const;
    void clientInitialize(int, std::string const&);
    Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
};
