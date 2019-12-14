#pragma once

class RandomLookAroundAndSitGoal : RandomLookAroundGoal {

public:
    virtual ~RandomLookAroundAndSitGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void RandomLookAroundAndSitGoal(Mob &, int, int, int, int, float);
    void _areMobConditionsMet(void);
    void _resetLook(void);
};
