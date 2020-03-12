#pragma once

#include <memory>


class JumpControlComponent {

public:
    void update(Mob &);
    ~JumpControlComponent();
    void _getHeightInternal()const;
    void setJumpDelay(int);
    void setDistanceScale(float);
    void setInternalType(std::unique_ptr<JumpControl>);
    void getAnimationDuration()const;
    JumpControlComponent(JumpControlComponent &&);
    void setAnimationDuration(int);
    void getSwimming()const;
    JumpControlComponent();
    void getJumpPower(Mob const&)const;
    void setJumpPower(float);
    void getJumpDelay(Mob const&)const;
    void initializeFromDefinition(Mob &, JumpControlDescription *);
    void resetSpeedModifier(Mob &);
//  void setJumpType(Mob &, JumpType); //TODO: incomplete function definition
    void getDistanceScale()const;
    void getJumpType(Mob const&)const;
    void setJumping(bool);
    void setSwimming(bool);
    void _getDelayInternal()const;
    void getJumping()const;
};
