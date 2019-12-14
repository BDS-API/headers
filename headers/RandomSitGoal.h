#pragma once

class RandomSitGoal : Goal {

public:
    virtual ~RandomSitGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void RandomSitGoal(Mob &, float, float, float, float);
};
