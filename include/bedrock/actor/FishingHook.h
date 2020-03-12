#pragma once

#include "../util/Vec2.h"
#include "../../unmapped/VariantParameterList.h"
#include "unmapped/ActorDefinitionGroup.h"
#include "Actor.h"
#include "../util/Vec3.h"
#include "unmapped/ActorDefinitionIdentifier.h"
#include "../nbt/CompoundTag.h"


class FishingHook : Actor {

public:
    static long BOBBER_SIZE;

    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
    virtual void normalTick();
    virtual void getShadowRadius()const;
    virtual void getSourceUniqueID()const;
    virtual void lerpMotion(Vec3 const&);
    virtual void save(CompoundTag &);
    ~FishingHook();
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    void getTarget();
    void _serverLured();
    FishingHook(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _hitCheck();
    void _serverHooked();
    void _getWaterPercentage();
    void _updateGravity();
    void _updateServer();
    void _serverNibble();
    void getOwner();
    void _lerpServerPos();
    void _serverTease();
    void _fishPosEvent();
    void getTargetUniqueID()const;
    void shoot(Vec3, float, float);
    void retrieve();
    void _pullCloser(Actor &, float);
    void _fishTeaseEvent();
    void _getServerFishSpeed();
    void _fishhookEvent();
};
