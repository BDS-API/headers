#pragma once

#include "BodyControl.h"


class LegacyBodyControl : public BodyControl {

public:
    virtual ~LegacyBodyControl(); // _ZN17LegacyBodyControlD2Ev
    virtual void __fake_function0(); // fake
    virtual void clientTick(Mob &); // _ZN17LegacyBodyControl10clientTickER3Mob
    LegacyBodyControl(); // _ZN17LegacyBodyControlC2Ev
};
