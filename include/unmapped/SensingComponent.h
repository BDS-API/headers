#pragma once



class SensingComponent {

public:
    void reset();
    bool canSee(Mob &, Actor const&);
    SensingComponent();
    SensingComponent(SensingComponent &&);
    ~SensingComponent();
    void withinFOV(Mob &, Vec3 const&, float);
};
