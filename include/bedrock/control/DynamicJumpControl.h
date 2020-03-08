#pragma once

#include "../description/component/JumpControlDescription"
#include "../actor/Mob"
#include "../../unmapped/JumpControlComponent"


class DynamicJumpControl : JumpControl {

public:
    DynamicJumpControl::~DynamicJumpControl()
    virtual void initializeInternal(Mob &, JumpControlDescription *);
    virtual void tick(JumpControlComponent &, Mob &);
    virtual void getJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void getJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void setJumpType(JumpControlComponent &, Mob &, JumpType);
    virtual void resetSpeedModifier(JumpControlComponent const&, Mob &);

    DynamicJumpControl(void);
};
