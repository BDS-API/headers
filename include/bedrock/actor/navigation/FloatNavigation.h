#pragma once

#include "./PathNavigation.h"
#include "../Mob.h"
#include "../../../unmapped/NavigationComponent.h"


class FloatNavigation : PathNavigation {

public:
    virtual ~FloatNavigation();
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);

    FloatNavigation();
};
