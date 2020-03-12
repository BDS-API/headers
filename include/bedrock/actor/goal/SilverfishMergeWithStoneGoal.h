#pragma once

#include <string>
#include "RandomStrollGoal.h"


class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    ~SilverfishMergeWithStoneGoal();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void start();
    SilverfishMergeWithStoneGoal(Silverfish &);
};
