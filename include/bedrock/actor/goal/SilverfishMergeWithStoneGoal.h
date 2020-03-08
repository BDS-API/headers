#pragma once

#include "../Silverfish"


class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    virtual SilverfishMergeWithStoneGoal::~SilverfishMergeWithStoneGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;

    SilverfishMergeWithStoneGoal(Silverfish &);
};
