#pragma once

#include "PathNavigation.h"


class GenericPathNavigation : PathNavigation {

public:
    ~GenericPathNavigation(); // _ZN21GenericPathNavigationD2Ev
    virtual void initializeInternal(Mob &, NavigationDescription *); // _ZN21GenericPathNavigation18initializeInternalER3MobP21NavigationDescription
    virtual void tick(NavigationComponent &, Mob &); // _ZN21GenericPathNavigation4tickER19NavigationComponentR3Mob
    virtual void getTempMobPos(Mob const&)const; // _ZNK21GenericPathNavigation13getTempMobPosERK3Mob
    virtual void stop(NavigationComponent &, Mob &); // _ZN21GenericPathNavigation4stopER19NavigationComponentR3Mob
    virtual void updatePath(NavigationComponent &, Mob &); // _ZN21GenericPathNavigation10updatePathER19NavigationComponentR3Mob
    GenericPathNavigation(); // _ZN21GenericPathNavigationC2Ev
};
