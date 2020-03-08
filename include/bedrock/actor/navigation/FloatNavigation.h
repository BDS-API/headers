#pragma once

#include "../Mob"
#include "../../../unmapped/NavigationComponent"


class FloatNavigation : PathNavigation {

public:
    virtual FloatNavigation::~FloatNavigation()
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);

    FloatNavigation(void);
};
