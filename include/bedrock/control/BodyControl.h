#pragma once

#include "../actor/Mob"


class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    virtual BodyControl::~BodyControl()
    virtual void clientTick(Mob &);

    BodyControl(void);
    void _allowUpdateBodyRotation(Mob const&)const;
};
