#pragma once

class RunAroundLikeCrazyGoal : Goal {

public:
    virtual ~RunAroundLikeCrazyGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void appendDebugInfo(std::string &)const;

    void RunAroundLikeCrazyGoal(Mob &, float);
};
