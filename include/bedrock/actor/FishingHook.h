#pragma once

#include "../util/Vec3.h"
#include "Actor.h"


class FishingHook : Actor {

public:
    static long BOBBER_SIZE;

//  virtual void reloadHardcoded(Actor::InitializationMethod, VariantParameterList const&); //TODO: incomplete function definition // _ZN11FishingHook15reloadHardcodedEN5Actor20InitializationMethodERK20VariantParameterList
    ~FishingHook(); // _ZN11FishingHookD2Ev
    virtual void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN11FishingHook6lerpToERK4Vec3RK4Vec2i
    virtual void lerpMotion(Vec3 const&); // _ZN11FishingHook10lerpMotionERK4Vec3
    virtual void normalTick(); // _ZN11FishingHook10normalTickEv
    virtual void getShadowRadius()const; // _ZNK11FishingHook15getShadowRadiusEv
//  virtual void handleEntityEvent(ActorEvent, int); //TODO: incomplete function definition // _ZN11FishingHook17handleEntityEventE10ActorEventi
    virtual void save(CompoundTag &); // _ZN11FishingHook4saveER11CompoundTag
    virtual void getSourceUniqueID()const; // _ZNK11FishingHook17getSourceUniqueIDEv
    FishingHook(ActorDefinitionGroup *, ActorDefinitionIdentifier const&); // _ZN11FishingHookC2EP20ActorDefinitionGroupRK25ActorDefinitionIdentifier
    void getOwner(); // _ZN11FishingHook8getOwnerEv
    void shoot(Vec3, float, float); // _ZN11FishingHook5shootE4Vec3ff
    void _pullCloser(Actor &, float); // _ZN11FishingHook11_pullCloserER5Actorf
    void retrieve(); // _ZN11FishingHook8retrieveEv
    void getTargetUniqueID()const; // _ZNK11FishingHook17getTargetUniqueIDEv
    void _lerpServerPos(); // _ZN11FishingHook14_lerpServerPosEv
    void _serverNibble(); // _ZN11FishingHook13_serverNibbleEv
    void _getServerFishSpeed(); // _ZN11FishingHook19_getServerFishSpeedEv
    void _serverHooked(); // _ZN11FishingHook13_serverHookedEv
    void _fishPosEvent(); // _ZN11FishingHook13_fishPosEventEv
    void _fishhookEvent(); // _ZN11FishingHook14_fishhookEventEv
    void _fishTeaseEvent(); // _ZN11FishingHook15_fishTeaseEventEv
    void _serverTease(); // _ZN11FishingHook12_serverTeaseEv
    void _serverLured(); // _ZN11FishingHook12_serverLuredEv
    void _updateServer(); // _ZN11FishingHook13_updateServerEv
    void _hitCheck(); // _ZN11FishingHook9_hitCheckEv
    void _getWaterPercentage(); // _ZN11FishingHook19_getWaterPercentageEv
    void _updateGravity(); // _ZN11FishingHook14_updateGravityEv
    void getTarget(); // _ZN11FishingHook9getTargetEv
};
