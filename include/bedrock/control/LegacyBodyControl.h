#pragma once

#include "../actor/Mob.h"
#include "./BodyControl.h"


class LegacyBodyControl : BodyControl {

public:
    virtual ~LegacyBodyControl();
    virtual void clientTick(Mob &);

    LegacyBodyControl();
};
