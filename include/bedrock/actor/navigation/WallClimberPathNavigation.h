#pragma once

#include "PathNavigation.h"


class WallClimberPathNavigation : PathNavigation {

public:
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    ~WallClimberPathNavigation();
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void moveTo(NavigationComponent &, Mob &, Actor &, float);
    virtual void tick(NavigationComponent &, Mob &);
    WallClimberPathNavigation();
};
