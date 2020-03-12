#pragma once

#include "../bedrock/util/Vec3.h"
#include "../bedrock/util/Vec2.h"
#include "../bedrock/actor/Actor.h"


class MovementInterpolator {

public:
    void _tickHeadYaw(Actor &);
    MovementInterpolator();
    void stop();
    void getRotationSteps()const;
    void reset();
    bool isActive()const;
    void tick(Actor &);
    void _tickPosition(Actor &);
    void start();
    void setHeadYawLerpTarget(float, int);
    void _preTickPosition(Actor &);
    void lerpToRotation(Vec2 const&, int);
    void getPositionSteps()const;
    void lerpTo(Vec3 const&, Vec2 const&, int);
    void _tickRotation(Actor &);
};
