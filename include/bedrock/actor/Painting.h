#pragma once

#include "unmapped/ActorDefinitionGroup.h"
#include <string>
#include "HangingActor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/DataLoadHelper.h"


class Painting : HangingActor {

public:
    ~Painting();
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual void placeHangingEntity(BlockSource &, int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void remove();
    virtual void dropItem();
    virtual void setPos(Vec3 const&);
    virtual void getWidth()const;
    virtual void getAddPacket();
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void getHeight()const;
    Painting(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void clientInitialize(int, std::string const&);
    void getCurrentMotive()const;
};
