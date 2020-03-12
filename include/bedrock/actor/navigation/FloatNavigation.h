#pragma once

#include "PathNavigation.h"


class FloatNavigation : PathNavigation {

public:
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);
    ~FloatNavigation();
    FloatNavigation();
};
