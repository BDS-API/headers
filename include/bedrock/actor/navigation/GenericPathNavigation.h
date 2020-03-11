#pragma once

#include "./PathNavigation.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"
#include "../../description/component/NavigationDescription.h"


class GenericPathNavigation : PathNavigation {

public:
    virtual ~GenericPathNavigation();
    virtual void initializeInternal(Mob &, NavigationDescription *);
    virtual void tick(NavigationComponent &, Mob &);
    virtual void getTempMobPos(Mob const&)const;
    virtual void stop(NavigationComponent &, Mob &);
    virtual void updatePath(NavigationComponent &, Mob &);

    GenericPathNavigation();
};
