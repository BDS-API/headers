#pragma once

#include "Player.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "HangingActor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"
#include "unmapped/ActorInteraction.h"
#include "../block/unmapped/BlockSource.h"
#include "../../unmapped/DataLoadHelper.h"


class LeashFenceKnotActor : HangingActor {

public:
    virtual void getShadowRadius()const;
    virtual void getWidth()const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void addAdditionalSaveData(CompoundTag &);
    ~LeashFenceKnotActor();
    virtual void dropItem();
    virtual void getHeight()const;
    virtual void _onSizeUpdated();
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void setDir(int);
    virtual bool isPickable();
    virtual void remove();
    virtual void wouldSurvive(BlockSource &);
    void removeAnimals(Player *);
    LeashFenceKnotActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void recalculateBoundingBox();
    void numberofAnimalsAttached();
    void shouldRenderAtSqrDistance(double);
};
