#pragma once

#include "Control.h"


class JumpControl : Control {

public:
    ~JumpControl();
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);
    virtual void tick(JumpControlComponent &, Mob &);
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    JumpControl();
};
