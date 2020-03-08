#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../util/Vec3"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class Painting : HangingActor {

public:
    virtual Painting::~Painting()
    virtual void remove();
    virtual void setPos(Vec3 const&);
    virtual void getAddPacket();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getWidth()const;
    virtual void getHeight()const;
    virtual void dropItem();
    virtual void placeHangingEntity(BlockSource &, int);

    Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(int, std::string const&);
    void getCurrentMotive()const;
};
