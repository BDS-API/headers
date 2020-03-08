#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/util/Vec3"
#include "../bedrock/util/Vec2"


class MovementInterpolator {

public:

    MovementInterpolator(void);
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
