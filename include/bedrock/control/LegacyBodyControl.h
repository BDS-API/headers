#pragma once

#include "BodyControl.h"


class LegacyBodyControl : BodyControl {

public:
    virtual void clientTick(Mob &);
    ~LegacyBodyControl();
    LegacyBodyControl();
};
