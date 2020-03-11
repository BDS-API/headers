#pragma once

#include "../actor/Mob.h"
#include "../description/component/JumpControlDescription.h"
#include "../../unmapped/JumpControlComponent.h"
#include "./JumpControl.h"


class DynamicJumpControl : JumpControl {

public:
    virtual ~DynamicJumpControl();
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void tick(JumpControlComponent &, Mob &);
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
//  virtual void setJumpType(JumpControlComponent &, Mob &, JumpType); //TODO: incomplete function definition
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);

    DynamicJumpControl();
};
