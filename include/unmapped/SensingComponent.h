#pragma once

#include "../bedrock/util/Vec3.h"
#include "./SensingComponent.h"
#include "../bedrock/actor/Mob.h"
#include "../bedrock/actor/Actor.h"


class SensingComponent {

public:

    ~SensingComponent();
    SensingComponent(SensingComponent &&);
    SensingComponent();
    void reset();
    bool canSee(Mob &, Actor const&);
    void withinFOV(Mob &, Vec3 const&, float);
};
