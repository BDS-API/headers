#pragma once



class MovementInterpolator {

public:
    void lerpToRotation(Vec2 const&, int);
    bool isActive()const;
    void _tickRotation(Actor &);
    void stop();
    void _tickHeadYaw(Actor &);
    void _tickPosition(Actor &);
    void start();
    MovementInterpolator();
    void getPositionSteps()const;
    void tick(Actor &);
    void getRotationSteps()const;
    void reset();
    void _preTickPosition(Actor &);
    void lerpTo(Vec3 const&, Vec2 const&, int);
    void setHeadYawLerpTarget(float, int);
};
