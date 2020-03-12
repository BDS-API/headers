#pragma once

#include "Actor.h"
#include "../util/Vec3.h"


class FishingHook : Actor {

public:
    static long BOBBER_SIZE;

    virtual void save(CompoundTag &);
    ~FishingHook();
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition
//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition
    virtual void getSourceUniqueID()const;
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void getShadowRadius()const;
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick();
    void _updateGravity();
    void _fishTeaseEvent();
    void _serverNibble();
    void _serverTease();
    void getOwner();
    FishingHook(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void _fishPosEvent();
    void _getWaterPercentage();
    void _fishhookEvent();
    void retrieve();
    void getTarget();
    void _serverHooked();
    void _pullCloser(Actor &, float);
    void getTargetUniqueID()const;
    void _hitCheck();
    void shoot(Vec3, float, float);
    void _getServerFishSpeed();
    void _serverLured();
    void _lerpServerPos();
    void _updateServer();
};
