#pragma once

#include "../bedrock/description/component/JumpControlDescription.h"
#include "../bedrock/control/JumpControl.h"
#include "../bedrock/actor/Mob.h"
#include <memory>


class JumpControlComponent {

public:
    void getSwimming()const;
    ~JumpControlComponent();
    void initializeFromDefinition(Mob &, JumpControlDescription *);
    JumpControlComponent();
    void getJumping()const;
    void update(Mob &);
    void getJumpType(Mob const&)const;
    void getAnimationDuration()const;
    void getDistanceScale()const;
    void getJumpDelay(Mob const&)const;
    void getJumpPower(Mob const&)const;
    void setJumping(bool);
    void _getDelayInternal()const;
    void setAnimationDuration(int);
    JumpControlComponent(JumpControlComponent &&);
    void _getHeightInternal()const;
    void setJumpDelay(int);
    void setInternalType(std::unique_ptr<JumpControl>);
    void setDistanceScale(float);
    void setJumpPower(float);
    void setSwimming(bool);
//  void setJumpType(Mob &, JumpType); //TODO: incomplete function definition
    void resetSpeedModifier(Mob &);
};
