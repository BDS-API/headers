#pragma once

#include "../../unmapped/ActorDefinitionGroup"
#include "../../unmapped/VariantParameterList"
#include "../nbt/CompoundTag"
#include "../../unmapped/Vec3"


class FishingHook : Actor {

public:
    static long BOBBER_SIZE;

    virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&);
    virtual FishingHook::~FishingHook();
    virtual void lerpTo(Vec3 const&, Vec2 const&, int);
    virtual void lerpMotion(Vec3 const&);
    virtual void normalTick(void);
    virtual void getShadowRadius(void)const;
    virtual void handleEntityEvent(ActorEvent, int);
    virtual void save(CompoundTag &);
    virtual void getSourceUniqueID(void)const;

    FishingHook(ActorDefinitionGroup *, ActorDefinitionIdentifier const&);
    void getOwner(void);
    void shoot(Vec3, float, float);
    void _pullCloser(Actor &, float);
    void retrieve(void);
    void getTargetUniqueID(void)const;
    void _lerpServerPos(void);
    void _serverNibble(void);
    void _getServerFishSpeed(void);
    void _serverHooked(void);
    void _fishPosEvent(void);
    void _fishhookEvent(void);
    void _fishTeaseEvent(void);
    void _serverTease(void);
    void _serverLured(void);
    void _updateServer(void);
    void _hitCheck(void);
    void _getWaterPercentage(void);
    void _updateGravity(void);
    void getTarget(void);
};
