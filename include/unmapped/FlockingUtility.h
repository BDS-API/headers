#pragma once



namespace FlockingUtility {

    void chooseRandomDirection(Actor &, Vec3 &);
    void checkForSteeringCollision(Actor &, Vec3 const&, float, Vec3 &);
    void getWaterHeights(Actor const&, float &, float &);
};
