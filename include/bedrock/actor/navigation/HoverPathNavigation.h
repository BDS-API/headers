#pragma once

#include "PathNavigation.h"


class HoverPathNavigation : PathNavigation {

public:
    ~HoverPathNavigation(); // _ZN19HoverPathNavigationD2Ev
    virtual void initializeInternal(Mob &, NavigationDescription *); // _ZN19HoverPathNavigation18initializeInternalER3MobP21NavigationDescription
    virtual void tick(NavigationComponent &, Mob &); // _ZN19HoverPathNavigation4tickER19NavigationComponentR3Mob
    virtual void getTempMobPos(Mob const&)const; // _ZNK19HoverPathNavigation13getTempMobPosERK3Mob
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&); // _ZN19HoverPathNavigation10createPathER19NavigationComponentR3MobRK4Vec3
    virtual void createPath(NavigationComponent &, Mob &, Actor &); // _ZN19HoverPathNavigation10createPathER19NavigationComponentR3MobR5Actor
    virtual void stop(NavigationComponent &, Mob &); // _ZN19HoverPathNavigation4stopER19NavigationComponentR3Mob
    virtual bool canUpdatePath(Mob const&)const; // _ZNK19HoverPathNavigation13canUpdatePathERK3Mob
    virtual void updatePath(NavigationComponent &, Mob &); // _ZN19HoverPathNavigation10updatePathER19NavigationComponentR3Mob
    HoverPathNavigation(); // _ZN19HoverPathNavigationC2Ev
};
