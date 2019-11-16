#pragma once

class JumpControl : Control {

    virtual void Jump~JumpControl();
    virtual void Jump~JumpControl();
    virtual void JumpinitializeInternal(Mob &, JumpControlDescription *);
    virtual void Jumptick(JumpControlComponent &, Mob &);
    virtual void JumpgetJumpDelay(JumpControlComponent const&, Mob const&)const;
    virtual void JumpgetJumpPower(JumpControlComponent const&, Mob const&)const;
    virtual void JumpgetJumpType(JumpControlComponent const&, Mob const&)const;
    virtual void JumpsetJumpType(JumpControlComponent &, Mob &, JumpType);
    virtual void JumpresetSpeedModifier(JumpControlComponent const&, Mob &);
}
