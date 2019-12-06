#pragma once

class FloatNavigation : PathNavigation {

public:
    virtual ~FloatNavigation();
    virtual void travel(NavigationComponent &, Mob &, float &, float &, float &);

    void FloatNavigation(void);
};
