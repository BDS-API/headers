#pragma once

class SilverfishMergeWithStoneGoal : RandomStrollGoal {

public:
    virtual ~SilverfishMergeWithStoneGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void SilverfishMergeWithStoneGoal(Silverfish &);
};
