#pragma once

#include "PathNavigation.h"


class FlyingPathNavigation : PathNavigation {

public:
    virtual void stop(NavigationComponent &, Mob &);
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);
    ~FlyingPathNavigation();
    virtual void getTempMobPos(Mob const&)const;
    virtual bool canUpdatePath(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    FlyingPathNavigation();
};
