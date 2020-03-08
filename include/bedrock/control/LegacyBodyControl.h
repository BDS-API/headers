#pragma once

#include "../actor/Mob"


class LegacyBodyControl : BodyControl {

public:
    virtual LegacyBodyControl::~LegacyBodyControl()
    virtual void clientTick(Mob &);

    LegacyBodyControl(void);
};
