#pragma once

#include "HangingActor.h"


class LeashFenceKnotActor : HangingActor {

public:
    virtual void remove();
    virtual void _onSizeUpdated();
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&);
    ~LeashFenceKnotActor();
    virtual bool isPickable();
    virtual void wouldSurvive(BlockSource &);
    virtual void getShadowRadius()const;
    virtual void addAdditionalSaveData(CompoundTag &);
    virtual void setDir(int);
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &);
    virtual void getWidth()const;
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getHeight()const;
    virtual void teleportTo(Vec3 const&, bool, int, int);
    virtual void dropItem();
    void numberofAnimalsAttached();
    void shouldRenderAtSqrDistance(double);
    LeashFenceKnotActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void recalculateBoundingBox();
    void removeAnimals(Player *);
};
