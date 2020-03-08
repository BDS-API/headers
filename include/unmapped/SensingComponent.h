#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/actor/Mob"
#include "../bedrock/util/Vec3"


class SensingComponent {

public:

    SensingComponent(SensingComponent&&);
    SensingComponent(void);
    void reset();
    bool canSee(Mob &, Actor const&);
    void withinFOV(Mob &, Vec3 const&, float);
};
