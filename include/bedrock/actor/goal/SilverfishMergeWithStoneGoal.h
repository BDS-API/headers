#pragma once

#include "../Silverfish.h"
#include "RandomStrollGoal.h"
#include <string>


class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    virtual void start();
    virtual bool canUse();
    ~SilverfishMergeWithStoneGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canContinueToUse();
    SilverfishMergeWithStoneGoal(Silverfish &);
};
