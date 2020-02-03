#pragma once

class MovementInterpolator {

public:

    MovementInterpolator(void);
    void lerpTo(Vec3 const&, Vec2 const&, int);
    void lerpToRotation(Vec2 const&, int);
    void reset(void);
    void setHeadYawLerpTarget(float, int);
    bool isActive(void)const;
    void getPositionSteps(void)const;
    void getRotationSteps(void)const;
    void tick(Actor &);
    void _preTickPosition(Actor &);
    void _tickPosition(Actor &);
    void _tickRotation(Actor &);
    void _tickHeadYaw(Actor &);
    void stop(void);
    void start(void);
};
