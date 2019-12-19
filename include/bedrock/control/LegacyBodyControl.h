#pragma once

class LegacyBodyControl : BodyControl {

public:
    virtual LegacyBodyControl::~LegacyBodyControl();
    virtual void clientTick(Mob &);

    LegacyBodyControl(void);
};
