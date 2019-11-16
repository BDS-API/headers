#pragma once

class DynamicJumpControl : JumpControl {

    virtual void Dynamic~DynamicJumpControl();
    virtual void Dynamic~DynamicJumpControl();
    virtual void DynamicinitializeInternal(Mob &, JumpControlDescription *);
    virtual void Dynamictick(JumpControlComponent &, Mob &);
    virtual void DynamicgetJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void DynamicgetJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void DynamicgetJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void DynamicsetJumpType(JumpControlComponent &, Mob &, JumpType);
    virtual void DynamicresetSpeedModifier(JumpControlComponent const&, Mob &);
}
