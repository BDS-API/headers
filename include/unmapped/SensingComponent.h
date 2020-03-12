#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/util/Vec3.h"


class SensingComponent {

public:
    void reset();
    void withinFOV(Mob &, Vec3 const&, float);
    SensingComponent(SensingComponent &&);
    SensingComponent();
    ~SensingComponent();
    bool canSee(Mob &, Actor const&);
};
