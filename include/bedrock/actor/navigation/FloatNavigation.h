#pragma once

#include "../../../unmapped/NavigationComponent.h"
#include "PathNavigation.h"
#include "../Mob.h"


class FloatNavigation : PathNavigation {

public:
    ~FloatNavigation();
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    FloatNavigation();
};
