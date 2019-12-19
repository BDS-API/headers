#pragma once

class MoveThroughVillageGoal : Goal {

public:
    virtual MoveThroughVillageGoal::~MoveThroughVillageGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveThroughVillageGoal(Mob &, float, bool);
};
