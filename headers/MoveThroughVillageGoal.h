#pragma once

class MoveThroughVillageGoal : Goal {

public:
    virtual ~MoveThroughVillageGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void MoveThroughVillageGoal(Mob &, float, bool);
};
