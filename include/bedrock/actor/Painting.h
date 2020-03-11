#pragma once

#include "../block/unmapped/BlockSource.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./HangingActor.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"
#include <string>


class Painting : HangingActor {

public:
    virtual ~Painting();
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
