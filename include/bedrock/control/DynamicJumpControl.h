#pragma once

#include "JumpControl.h"


class DynamicJumpControl : JumpControl {

public:
    ~DynamicJumpControl(); // _ZN18DynamicJumpControlD2Ev
    virtual void initializeInternal(Mob &, JumpControlDescription *); // _ZN18DynamicJumpControl18initializeInternalER3MobP22JumpControlDescription
    virtual void tick(JumpControlComponent &, Mob &); // _ZN18DynamicJumpControl4tickER20JumpControlComponentR3Mob
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const; // _ZNK18DynamicJumpControl12getJumpDelayERK20JumpControlComponentRK3Mob
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const; // _ZNK18DynamicJumpControl12getJumpPowerERK20JumpControlComponentRK3Mob
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const; // _ZNK18DynamicJumpControl11getJumpTypeERK20JumpControlComponentRK3Mob
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition // _ZN18DynamicJumpControl11setJumpTypeER20JumpControlComponentR3Mob8JumpType
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &); // _ZN18DynamicJumpControl18resetSpeedModifierERK20JumpControlComponentR3Mob
    DynamicJumpControl(); // _ZN18DynamicJumpControlC2Ev
};
