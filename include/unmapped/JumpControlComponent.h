#pragma once

#include <memory>


class JumpControlComponent {

public:
    ~JumpControlComponent(); // _ZN20JumpControlComponentD2Ev
    JumpControlComponent(JumpControlComponent &&); // _ZN20JumpControlComponentC2EOS_
    JumpControlComponent(); // _ZN20JumpControlComponentC2Ev
    void initializeFromDefinition(Mob &, JumpControlDescription *); // _ZN20JumpControlComponent24initializeFromDefinitionER3MobP22JumpControlDescription
    void setInternalType(std::unique_ptr<JumpControl>); // _ZN20JumpControlComponent15setInternalTypeESt10unique_ptrI11JumpControlSt14default_deleteIS1_EE
    void getAnimationDuration()const; // _ZNK20JumpControlComponent20getAnimationDurationEv
    void setAnimationDuration(int); // _ZN20JumpControlComponent20setAnimationDurationEi
    void getDistanceScale()const; // _ZNK20JumpControlComponent16getDistanceScaleEv
    void setDistanceScale(float); // _ZN20JumpControlComponent16setDistanceScaleEf
    void getJumping()const; // _ZNK20JumpControlComponent10getJumpingEv
    void setJumping(bool); // _ZN20JumpControlComponent10setJumpingEb
    void getJumpDelay(Mob const&)const; // _ZNK20JumpControlComponent12getJumpDelayERK3Mob
    void setJumpDelay(int); // _ZN20JumpControlComponent12setJumpDelayEi
    void getJumpPower(Mob const&)const; // _ZNK20JumpControlComponent12getJumpPowerERK3Mob
    void setJumpPower(float); // _ZN20JumpControlComponent12setJumpPowerEf
    void getJumpType(Mob const&)const; // _ZNK20JumpControlComponent11getJumpTypeERK3Mob
//  void setJumpType(Mob &, JumpType); //TODO: incomplete function definition // _ZN20JumpControlComponent11setJumpTypeER3Mob8JumpType
    void getSwimming()const; // _ZNK20JumpControlComponent11getSwimmingEv
    void setSwimming(bool); // _ZN20JumpControlComponent11setSwimmingEb
    void _getDelayInternal()const; // _ZNK20JumpControlComponent17_getDelayInternalEv
    void _getHeightInternal()const; // _ZNK20JumpControlComponent18_getHeightInternalEv
    void resetSpeedModifier(Mob &); // _ZN20JumpControlComponent18resetSpeedModifierER3Mob
    void update(Mob &); // _ZN20JumpControlComponent6updateER3Mob
};
