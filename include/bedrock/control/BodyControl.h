#pragma once

#include "../actor/Mob.h"
#include "./Control.h"


class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    virtual ~BodyControl();
    virtual void clientTick(Mob &);

    BodyControl();
    void _allowUpdateBodyRotation(Mob const&)const;
};
