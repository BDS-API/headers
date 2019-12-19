#pragma once

class FindUnderwaterTreasureGoal : Goal {

public:
    virtual FindUnderwaterTreasureGoal::~FindUnderwaterTreasureGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FindUnderwaterTreasureGoal(Mob &, float, int, int);
};
