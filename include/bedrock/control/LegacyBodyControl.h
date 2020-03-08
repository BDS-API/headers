#pragma once

#include "../actor/Mob"


class LegacyBodyControl : BodyControl {

public:
    LegacyBodyControl::~LegacyBodyControl()
    virtual void clientTick(Mob &);

    LegacyBodyControl(void);
};
