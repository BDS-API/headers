#pragma once

#include "../bedrock/control/JumpControl.h"
#include "./JumpControlComponent.h"
#include <memory>
#include "../bedrock/actor/Mob.h"
#include "../bedrock/description/component/JumpControlDescription.h"


class JumpControlComponent {

public:

    ~JumpControlComponent();
    JumpControlComponent(JumpControlComponent &&);
    JumpControlComponent();
    void initializeFromDefinition(Mob &, JumpControlDescription *);
    void setInternalType(std::unique_ptr<JumpControl, std::default_delete<JumpControl>>);
    void getAnimationDuration()const;
    void setAnimationDuration(int);
    void getDistanceScale()const;
    void setDistanceScale(float);
    void getJumping()const;
    void setJumping(bool);
    void getJumpDelay(Mob const&)const;
    void setJumpDelay(int);
    void getJumpPower(Mob const&)const;
    void setJumpPower(float);
    void getJumpType(Mob const&)const;
//  void setJumpType(Mob &, JumpType); //TODO: incomplete function definition
    void getSwimming()const;
    void setSwimming(bool);
    void _getDelayInternal()const;
    void _getHeightInternal()const;
    void resetSpeedModifier(Mob &);
    void update(Mob &);
};
