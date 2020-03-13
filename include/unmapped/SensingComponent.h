#pragma once



class SensingComponent {

public:
    ~SensingComponent(); // _ZN16SensingComponentD2Ev
    SensingComponent(SensingComponent &&); // _ZN16SensingComponentC2EOS_
    SensingComponent(); // _ZN16SensingComponentC2Ev
    void reset(); // _ZN16SensingComponent5resetEv
    bool canSee(Mob &, Actor const&); // _ZN16SensingComponent6canSeeER3MobRK5Actor
    void withinFOV(Mob &, Vec3 const&, float); // _ZN16SensingComponent9withinFOVER3MobRK4Vec3f
};
