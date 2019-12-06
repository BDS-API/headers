#pragma once

class SensingComponent {

public:

    void SensingComponent(SensingComponent&&);
    void SensingComponent(void);
    void reset(void);
    bool canSee(Mob &, Actor const&);
    void withinFOV(Mob &, Vec3 const&, float);
};
