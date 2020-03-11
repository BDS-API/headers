#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"


class FlockingUtility {

public:

    void chooseRandomDirection(Actor &, Vec3 &);
    void checkForSteeringCollision(Actor &, Vec3 const&, float, Vec3 &);
    void getWaterHeights(Actor const&, float &, float &);
};
