#pragma once

#include "HangingActor.h"


class LeashFenceKnotActor : HangingActor {

public:
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN19LeashFenceKnotActor15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~LeashFenceKnotActor(); // _ZN19LeashFenceKnotActorD2Ev
    virtual void remove(); // _ZN19LeashFenceKnotActor6removeEv
    virtual void teleportTo(Vec3 const&, bool, int, int); // _ZN19LeashFenceKnotActor10teleportToERK4Vec3bii
    virtual void getShadowRadius()const; // _ZNK19LeashFenceKnotActor15getShadowRadiusEv
    virtual bool isPickable(); // _ZN19LeashFenceKnotActor10isPickableEv
    virtual void getInteraction(Player &, ActorInteraction &, Vec3 const&); // _ZN19LeashFenceKnotActor14getInteractionER6PlayerR16ActorInteractionRK4Vec3
    virtual void readAdditionalSaveData(CompoundTag const&, DataLoadHelper &); // _ZN19LeashFenceKnotActor22readAdditionalSaveDataERK11CompoundTagR14DataLoadHelper
    virtual void addAdditionalSaveData(CompoundTag &); // _ZN19LeashFenceKnotActor21addAdditionalSaveDataER11CompoundTag
    virtual void _onSizeUpdated(); // _ZN19LeashFenceKnotActor14_onSizeUpdatedEv
    virtual void setDir(int); // _ZN19LeashFenceKnotActor6setDirEi
    virtual void getWidth()const; // _ZNK19LeashFenceKnotActor8getWidthEv
    virtual void getHeight()const; // _ZNK19LeashFenceKnotActor9getHeightEv
    virtual void dropItem(); // _ZN19LeashFenceKnotActor8dropItemEv
    virtual void wouldSurvive(BlockSource &); // _ZN19LeashFenceKnotActor12wouldSurviveER11BlockSource
    LeashFenceKnotActor(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN19LeashFenceKnotActorC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void shouldRenderAtSqrDistance(double); // _ZN19LeashFenceKnotActor25shouldRenderAtSqrDistanceEd
    void removeAnimals(Player *); // _ZN19LeashFenceKnotActor13removeAnimalsEP6Player
    void numberofAnimalsAttached(); // _ZN19LeashFenceKnotActor23numberofAnimalsAttachedEv
    void recalculateBoundingBox(); // _ZN19LeashFenceKnotActor22recalculateBoundingBoxEv
};
