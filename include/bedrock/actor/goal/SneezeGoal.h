#pragma once

#include <string>
#include "Goal.h"
#include <vector>


class SneezeGoal : Goal {

public:
    ~SneezeGoal(); // _ZN10SneezeGoalD2Ev
    virtual bool canUse(); // _ZN10SneezeGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN10SneezeGoal16canContinueToUseEv
    virtual void start(); // _ZN10SneezeGoal5startEv
    virtual void stop(); // _ZN10SneezeGoal4stopEv
    virtual void tick(); // _ZN10SneezeGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK10SneezeGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SneezeGoal(Mob &, float, float, float, std::string const&, std::string const&, std::string const&, float, std::vector<MobDescriptor> const&, float); // _ZN10SneezeGoalC2ER3MobfffRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_S9_fRKSt6vectorI13MobDescriptorSaISB_EEf
};
