#pragma once

#include "BodyControl.h"
#include "../actor/Mob.h"


class LegacyBodyControl : BodyControl {

public:
    ~LegacyBodyControl();
    virtual void clientTick(Mob &);
    LegacyBodyControl();
};
