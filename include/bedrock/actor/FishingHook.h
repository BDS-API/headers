#pragma once

#include "unmapped/ActorDefinitionIdentifier.h"
#include "../util/Vec2.h"
#include "./Actor.h"
#include "../../unmapped/VariantParameterList.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "../nbt/CompoundTag.h"


class FishingHook : Actor {

public:
    static long BOBBER_SIZE;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual ~FishingHook();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    virtual void getShadowRadius()const;
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void save(CompoundTag &);
    virtual void getSourceUniqueID()const;

    FishingHook(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOwner();
    void shoot(Vec3, float, float);
    void _pullCloser(Actor &, float);
    void retrieve();
    void getTargetUniqueID()const;
    void _lerpServerPos();
    void _serverNibble();
    void _getServerFishSpeed();
    void _serverHooked();
    void _fishPosEvent();
    void _fishhookEvent();
    void _fishTeaseEvent();
    void _serverTease();
    void _serverLured();
    void _updateServer();
    void _hitCheck();
    void _getWaterPercentage();
    void _updateGravity();
    void getTarget();
};
