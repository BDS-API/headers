#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/actor/Actor.h"
#include "../bedrock/util/Vec2.h"


class MovementInterpolator {

public:

    MovementInterpolator();
    void lerpTo(Vec3 const&, Vec2 const&, int);
    void lerpToRotation(Vec2 const&, int);
    void reset();
    void setHeadYawLerpTarget(float, int);
    bool isActive()const;
    void getPositionSteps()const;
    void getRotationSteps()const;
    void tick(Actor &);
    void _preTickPosition(Actor &);
    void _tickPosition(Actor &);
    void _tickRotation(Actor &);
    void _tickHeadYaw(Actor &);
    void stop();
    void start();
};
