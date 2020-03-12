#pragma once

#include "../../unmapped/JumpControlComponent.h"
#include "JumpControl.h"
#include "../description/component/JumpControlDescription.h"
#include "../actor/Mob.h"


class DynamicJumpControl : JumpControl {

public:
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void tick(JumpControlComponent &, Mob &);
    ~DynamicJumpControl();
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    DynamicJumpControl();
};
