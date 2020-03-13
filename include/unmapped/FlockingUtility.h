#pragma once



namespace FlockingUtility {

    void chooseRandomDirection(Actor &, Vec3 &); // _ZN15FlockingUtility21chooseRandomDirectionER5ActorR4Vec3
    void checkForSteeringCollision(Actor &, Vec3 const&, float, Vec3 &); // _ZN15FlockingUtility25checkForSteeringCollisionER5ActorRK4Vec3fRS2_
    void getWaterHeights(Actor const&, float &, float &); // _ZN15FlockingUtility15getWaterHeightsERK5ActorRfS3_
};
