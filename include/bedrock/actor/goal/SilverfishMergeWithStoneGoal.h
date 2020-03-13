#pragma once

#include <string>
#include "RandomStrollGoal.h"


class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    ~SilverfishMergeWithStoneGoal(); // _ZN28SilverfishMergeWithStoneGoalD2Ev
    virtual bool canUse(); // _ZN28SilverfishMergeWithStoneGoal6canUseEv
    virtual bool canContinueToUse(); // _ZN28SilverfishMergeWithStoneGoal16canContinueToUseEv
    virtual void start(); // _ZN28SilverfishMergeWithStoneGoal5startEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK28SilverfishMergeWithStoneGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SilverfishMergeWithStoneGoal(Silverfish &); // _ZN28SilverfishMergeWithStoneGoalC2ER10Silverfish
};
