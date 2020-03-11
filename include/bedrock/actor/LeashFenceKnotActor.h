#pragma once

#include "../block/unmapped/BlockSource.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "./HangingActor.h"
#include "../nbt/CompoundTag.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/Vec3.h"
#include "../../unmapped/DataLoadHelper.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "unmapped/ActorInteraction.h"
#include "./Player.h"


class LeashFenceKnotActor : HangingActor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~LeashFenceKnotActor();
    virtual void remove();
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void getShadowRadius()const;
    virtual bool isPickable();
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void _onSizeUpdated();
    virtual void setDir(int);
    virtual void getWidth()const;
    virtual void getHeight()const;
    virtual void dropItem();
    virtual void wouldSurvive(BlockSource &);

    LeashFenceKnotActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void shouldRenderAtSqrDistance(double);
    void removeAnimals(Player *);
    void numberofAnimalsAttached();
    void recalculateBoundingBox();
};
