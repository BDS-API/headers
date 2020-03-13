#pragma once

#include "Control.h"


class LookControl : Control {

public:
    ~LookControl(); // _ZN11LookControlD2Ev
    virtual void initializeInternal(Mob &); // _ZN11LookControl18initializeInternalER3Mob
    virtual void tick(Mob &); // _ZN11LookControl4tickER3Mob
    LookControl(); // _ZN11LookControlC2Ev
};
