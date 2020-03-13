#pragma once

#include "PathNavigation.h"


class WallClimberPathNavigation : PathNavigation {

public:
    ~WallClimberPathNavigation(); // _ZN25WallClimberPathNavigationD2Ev
    virtual void tick(NavigationComponent &, Mob &); // _ZN25WallClimberPathNavigation4tickER19NavigationComponentR3Mob
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&); // _ZN25WallClimberPathNavigation10createPathER19NavigationComponentR3MobRK4Vec3
    virtual void createPath(NavigationComponent &, Mob &, Actor &); // _ZN25WallClimberPathNavigation10createPathER19NavigationComponentR3MobR5Actor
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float); // _ZN25WallClimberPathNavigation6moveToER19NavigationComponentR3MobR5Actorf
    virtual bool canUpdatePath(Mob const&)const; // _ZNK25WallClimberPathNavigation13canUpdatePathERK3Mob
    WallClimberPathNavigation(); // _ZN25WallClimberPathNavigationC2Ev
};
