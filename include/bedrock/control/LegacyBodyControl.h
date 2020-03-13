#pragma once

#include "BodyControl.h"


class LegacyBodyControl : BodyControl {

public:
    ~LegacyBodyControl(); // _ZN17LegacyBodyControlD2Ev
    virtual void clientTick(Mob &); // _ZN17LegacyBodyControl10clientTickER3Mob
    LegacyBodyControl(); // _ZN17LegacyBodyControlC2Ev
};
