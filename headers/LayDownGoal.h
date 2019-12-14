#pragma once

class LayDownGoal : Goal {

public:
    virtual ~LayDownGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void LayDownGoal(Mob &, int, int);
};
