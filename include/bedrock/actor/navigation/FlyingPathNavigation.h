#pragma once

#include "PathNavigation.h"


class FlyingPathNavigation : PathNavigation {

public:
    ~FlyingPathNavigation(); // _ZN20FlyingPathNavigationD2Ev
    virtual void initializeInternal(Mob &, NavigationDescription *); // _ZN20FlyingPathNavigation18initializeInternalER3MobP21NavigationDescription
    virtual void tick(NavigationComponent &, Mob &); // _ZN20FlyingPathNavigation4tickER19NavigationComponentR3Mob
    virtual void getTempMobPos(Mob const&)const; // _ZNK20FlyingPathNavigation13getTempMobPosERK3Mob
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&); // _ZN20FlyingPathNavigation10createPathER19NavigationComponentR3MobRK4Vec3
    virtual void createPath(NavigationComponent &, Mob &, Actor &); // _ZN20FlyingPathNavigation10createPathER19NavigationComponentR3MobR5Actor
    virtual void stop(NavigationComponent &, Mob &); // _ZN20FlyingPathNavigation4stopER19NavigationComponentR3Mob
    virtual bool canUpdatePath(Mob const&)const; // _ZNK20FlyingPathNavigation13canUpdatePathERK3Mob
    virtual void updatePath(NavigationComponent &, Mob &); // _ZN20FlyingPathNavigation10updatePathER19NavigationComponentR3Mob
    FlyingPathNavigation(); // _ZN20FlyingPathNavigationC2Ev
};
