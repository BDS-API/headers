#pragma once



class MovementInterpolator {

public:
    MovementInterpolator(); // _ZN20MovementInterpolatorC2Ev
    void lerpTo(Vec3 const&, Vec2 const&, int); // _ZN20MovementInterpolator6lerpToERK4Vec3RK4Vec2i
    void lerpToRotation(Vec2 const&, int); // _ZN20MovementInterpolator14lerpToRotationERK4Vec2i
    void reset(); // _ZN20MovementInterpolator5resetEv
    void setHeadYawLerpTarget(float, int); // _ZN20MovementInterpolator20setHeadYawLerpTargetEfi
    bool isActive()const; // _ZNK20MovementInterpolator8isActiveEv
    void getPositionSteps()const; // _ZNK20MovementInterpolator16getPositionStepsEv
    void getRotationSteps()const; // _ZNK20MovementInterpolator16getRotationStepsEv
    void tick(Actor &); // _ZN20MovementInterpolator4tickER5Actor
    void _preTickPosition(Actor &); // _ZN20MovementInterpolator16_preTickPositionER5Actor
    void _tickPosition(Actor &); // _ZN20MovementInterpolator13_tickPositionER5Actor
    void _tickRotation(Actor &); // _ZN20MovementInterpolator13_tickRotationER5Actor
    void _tickHeadYaw(Actor &); // _ZN20MovementInterpolator12_tickHeadYawER5Actor
    void stop(); // _ZN20MovementInterpolator4stopEv
    void start(); // _ZN20MovementInterpolator5startEv
};
