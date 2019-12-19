#pragma once

class SensingComponent {

public:

    SensingComponent(SensingComponent&&);
    SensingComponent(void);
    void reset(void);
    bool canSee(Mob &, Actor const&);
    void withinFOV(Mob &, Vec3 const&, float);
};
