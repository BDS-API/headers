#pragma once

#include "Control.h"
#include "../actor/Mob.h"


class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    virtual void clientTick(Mob &);
    ~BodyControl();
    void _allowUpdateBodyRotation(Mob const&)const;
    BodyControl();
};
