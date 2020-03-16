#pragma once

#include "PathNavigation.h"


class FloatNavigation : public PathNavigation {

public:
    virtual ~FloatNavigation(); // _ZN15FloatNavigationD2Ev
    virtual void __fake_function0(); // fake
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &); // _ZN15FloatNavigation6travelER19NavigationComponentR3MobRfS4_S4_
    FloatNavigation(); // _ZN15FloatNavigationC2Ev
};
