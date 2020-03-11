#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Vec2.h"


class ParticlesTeleportTrailEvent {

public:

    ParticlesTeleportTrailEvent(Vec3, Vec3, Vec2, float, int);
    void save()const;
};
