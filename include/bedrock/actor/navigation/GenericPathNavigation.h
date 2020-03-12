#pragma once

#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"
#include "../Mob.h"
#include "../../description/component/NavigationDescription.h"


class GenericPathNavigation : PathNavigation {

public:
    virtual void getTempMobPos(Mob const&)const;
    virtual void tick(NavigationComponent &, Mob &);
    virtual void initializeInternal(Mob &, NavigationDescription *);
    ~GenericPathNavigation();
    virtual void stop(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);
    GenericPathNavigation();
};
