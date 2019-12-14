#pragma once

class RandomLookAroundGoal : Goal {

public:
    virtual ~RandomLookAroundGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void RandomLookAroundGoal(Mob &, int, int, float);
};
