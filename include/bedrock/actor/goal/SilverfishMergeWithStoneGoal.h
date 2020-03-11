#pragma once

#include "../Silverfish.h"
#include "./RandomStrollGoal.h"
#include <string>


class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    virtual ~SilverfishMergeWithStoneGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    SilverfishMergeWithStoneGoal(Silverfish &);
};
