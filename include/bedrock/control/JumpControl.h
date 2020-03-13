#pragma once

#include "Control.h"


class JumpControl : Control {

public:
    ~JumpControl(); // _ZN11JumpControlD2Ev
    virtual void initializeInternal(Mob &, JumpControlDescription *); // _ZN11JumpControl18initializeInternalER3MobP22JumpControlDescription
    virtual void tick(JumpControlComponent &, Mob &); // _ZN11JumpControl4tickER20JumpControlComponentR3Mob
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const; // _ZNK11JumpControl12getJumpDelayERK20JumpControlComponentRK3Mob
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const; // _ZNK11JumpControl12getJumpPowerERK20JumpControlComponentRK3Mob
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const; // _ZNK11JumpControl11getJumpTypeERK20JumpControlComponentRK3Mob
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition // _ZN11JumpControl11setJumpTypeER20JumpControlComponentR3Mob8JumpType
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &); // _ZN11JumpControl18resetSpeedModifierERK20JumpControlComponentR3Mob
    JumpControl(); // _ZN11JumpControlC2Ev
};
