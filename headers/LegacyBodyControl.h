#pragma once

class LegacyBodyControl : BodyControl {

public:
    virtual ~LegacyBodyControl();
    virtual void clientTick(Mob &);

    void LegacyBodyControl(void);
};
