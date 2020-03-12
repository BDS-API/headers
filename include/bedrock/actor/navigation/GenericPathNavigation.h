#pragma once

#include "PathNavigation.h"


class GenericPathNavigation : PathNavigation {

public:
    virtual void updatePath(NavigationComponent &, Mob &);
    ~GenericPathNavigation();
    virtual void stop(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void tick(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    GenericPathNavigation();
};
