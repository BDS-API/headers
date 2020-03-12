#pragma once

#include "PathNavigation.h"


class HoverPathNavigation : PathNavigation {

public:
    ~HoverPathNavigation();
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Actor &);
    virtual void stop(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual bool canUpdatePath(Mob const&)const;
    virtual void createPath(NavigationComponent &, Mob &, Vec3 const&);
    virtual void updatePath(NavigationComponent &, Mob &);
    HoverPathNavigation();
};
