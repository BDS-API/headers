#pragma once

#include "../actor/Mob.h"
#include "../description/component/JumpControlDescription.h"
#include "./Control.h"
#include "../../unmapped/JumpControlComponent.h"


class JumpControl : Control {

public:
    virtual ~JumpControl();
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void tick(JumpControlComponent &, Mob &);
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);

    JumpControl();
};
