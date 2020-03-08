#pragma once

#include "../block/unmapped/BlockSource"
#include "../nbt/CompoundTag"
#include "unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../util/Vec3"
#include "unmapped/ActorInteraction"
#include "unmapped/ActorDefinitionIdentifier"
#include "../../unmapped/DataLoadHelper"


class LeashFenceKnotActor : HangingActor {

public:
    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual LeashFenceKnotActor::~LeashFenceKnotActor()
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
