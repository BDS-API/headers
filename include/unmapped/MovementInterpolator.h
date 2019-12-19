#pragma once

class MovementInterpolator {

public:

    bool isActive(void);
    MovementInterpolator(void);
    void lerpTo(Vec3 const&, Vec2 const&, int);
    void reset(void);
    void setHeadYawLerpTarget(float);
    void tick(Actor &);
    void stop(void);
    void start(void);
};
