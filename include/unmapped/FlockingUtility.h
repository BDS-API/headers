#pragma once

#include "../bedrock/util/Vec3"
#include "../bedrock/actor/Actor"


class FlockingUtility {

public:

    void chooseRandomDirection(Actor &, Vec3 &);
    void checkForSteeringCollision(Actor &, Vec3 const&, float, Vec3&);
    void getWaterHeights(Actor const&, float &, float &);
};
