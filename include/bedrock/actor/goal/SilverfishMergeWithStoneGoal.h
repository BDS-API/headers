#pragma once

class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    virtual SilverfishMergeWithStoneGoal::~SilverfishMergeWithStoneGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    SilverfishMergeWithStoneGoal(Silverfish &);
};
