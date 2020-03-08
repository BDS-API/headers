#pragma once

#include "../bedrock/util/Vec2"
#include "../bedrock/util/Vec3"


class ParticlesTeleportTrailEvent {

public:

    ParticlesTeleportTrailEvent(Vec3, Vec3, Vec2, float, int);
    void save()const;
};
