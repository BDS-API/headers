#pragma once

#include "../../unmapped/JumpControlComponent.h"
#include "Control.h"
#include "../description/component/JumpControlDescription.h"
#include "../actor/Mob.h"


class JumpControl : Control {

public:
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    ~JumpControl();
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);
    virtual void tick(JumpControlComponent &, Mob &);
    JumpControl();
};
