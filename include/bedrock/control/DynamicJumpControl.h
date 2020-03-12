#pragma once

#include "JumpControl.h"


class DynamicJumpControl : JumpControl {

public:
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
    ~DynamicJumpControl();
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    virtual void tick(JumpControlComponent &, Mob &);
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    DynamicJumpControl();
};
