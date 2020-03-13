#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Vec2.h"


class ParticlesTeleportTrailEvent {

public:
    ParticlesTeleportTrailEvent(Vec3, Vec3, Vec2, float, int); // _ZN27ParticlesTeleportTrailEventC2E4Vec3S0_4Vec2fi
    void save()const; // _ZNK27ParticlesTeleportTrailEvent4saveEv
};
