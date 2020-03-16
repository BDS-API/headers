#pragma once

#include "RandomStrollGoal.h"
#include <string>


class SilverfishMergeWithStoneGoal : public RandomStrollGoal {

public:
    virtual ~SilverfishMergeWithStoneGoal(); // _ZN28SilverfishMergeWithStoneGoalD2Ev
    virtual void __fake_function0(); // fake
    virtual bool canUse(); // _ZN28SilverfishMergeWithStoneGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN28SilverfishMergeWithStoneGoal16canContinueToUseEv
    virtual void start(); // _ZN28SilverfishMergeWithStoneGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK28SilverfishMergeWithStoneGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SilverfishMergeWithStoneGoal(Silverfish &); // _ZN28SilverfishMergeWithStoneGoalC2ER10Silverfish
};
