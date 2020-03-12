#pragma once

#include "Control.h"


class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    ~BodyControl();
    virtual void clientTick(Mob &);
    void _allowUpdateBodyRotation(Mob const&)const;
    BodyControl();
};
