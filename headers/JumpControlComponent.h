#pragma once

class JumpControlComponent {

public:

    void JumpControlComponent(JumpControlComponent&&);
    void JumpControlComponent(void);
    void initializeFromDefinition(Mob &, JumpControlDescription *);
    void setInternalType(std::unique_ptr<JumpControl, std::default_delete<JumpControl>>);
    void getAnimationDuration(void)const;
    void setAnimationDuration(int);
    void getDistanceScale(void)const;
    void setDistanceScale(float);
    void getJumping(void)const;
    void setJumping(bool);
    void getJumpDelay(Mob const&)const;
    void setJumpDelay(int);
    void getJumpPower(Mob const&)const;
    void setJumpPower(float);
    void getJumpType(Mob const&)const;
    void setJumpType(Mob &, JumpType);
    void getSwimming(void)const;
    void setSwimming(bool);
    void _getDelayInternal(void)const;
    void _getHeightInternal(void)const;
    void resetSpeedModifier(Mob &);
    void update(Mob &);
};
