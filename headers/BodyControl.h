#pragma once

class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    virtual ~BodyControl();
    virtual void clientTick(Mob &);

    void BodyControl(void);
    void _allowUpdateBodyRotation(Mob const&)const;
};
