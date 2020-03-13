#pragma once

#include "PathNavigation.h"


class WaterBoundPathNavigation : PathNavigation {

public:
    ~WaterBoundPathNavigation(); // _ZN24WaterBoundPathNavigationD2Ev
    virtual void initializeInternal(Mob &, NavigationDescription *); // _ZN24WaterBoundPathNavigation18initializeInternalER3MobP21NavigationDescription
    virtual void tick(NavigationComponent &, Mob &); // _ZN24WaterBoundPathNavigation4tickER19NavigationComponentR3Mob
    virtual void getTempMobPos(Mob const&)const; // _ZNK24WaterBoundPathNavigation13getTempMobPosERK3Mob
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &); // _ZN24WaterBoundPathNavigation6travelER19NavigationComponentR3MobRfS4_S4_
    virtual bool canUpdatePath(Mob const&)const; // _ZNK24WaterBoundPathNavigation13canUpdatePathERK3Mob
    virtual void updatePath(NavigationComponent &, Mob &); // _ZN24WaterBoundPathNavigation10updatePathER19NavigationComponentR3Mob
    WaterBoundPathNavigation(); // _ZN24WaterBoundPathNavigationC2Ev
    void setSteerDampening(float); // _ZN24WaterBoundPathNavigation17setSteerDampeningEf
    void setMinDepth(float); // _ZN24WaterBoundPathNavigation11setMinDepthEf
    void setMaxDepth(float); // _ZN24WaterBoundPathNavigation11setMaxDepthEf
    void setTerrainAvoidDistance(float); // _ZN24WaterBoundPathNavigation23setTerrainAvoidDistanceEf
    void setLookAheadDist(float); // _ZN24WaterBoundPathNavigation16setLookAheadDistEf
    void setRiverFollow(bool); // _ZN24WaterBoundPathNavigation14setRiverFollowEb
    void getMinDepth()const; // _ZNK24WaterBoundPathNavigation11getMinDepthEv
    void getMaxDepth()const; // _ZNK24WaterBoundPathNavigation11getMaxDepthEv
    void getSteerDampening()const; // _ZNK24WaterBoundPathNavigation17getSteerDampeningEv
    void getTerrainAvoidDistance()const; // _ZNK24WaterBoundPathNavigation23getTerrainAvoidDistanceEv
};
