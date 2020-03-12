#pragma once

#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec3.h"


namespace FlockingUtility {

    void checkForSteeringCollision(Actor &, Vec3 const&, float, Vec3 &);
    void getWaterHeights(Actor const&, float &, float &);
    void chooseRandomDirection(Actor &, Vec3 &);
};
