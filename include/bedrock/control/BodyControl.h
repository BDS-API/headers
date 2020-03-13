#pragma once

#include "Control.h"


class BodyControl : Control {

public:
    static long MAX_CLAMP_ANGLE;

    ~BodyControl(); // _ZN11BodyControlD2Ev
    virtual void clientTick(Mob &); // _ZN11BodyControl10clientTickER3Mob
    BodyControl(); // _ZN11BodyControlC2Ev
    void _allowUpdateBodyRotation(Mob const&)const; // _ZNK11BodyControl24_allowUpdateBodyRotationERK3Mob
};
