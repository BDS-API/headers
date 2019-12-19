#pragma once

class MakeLoveGoal : Goal {

public:
    virtual MakeLoveGoal::~MakeLoveGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    MakeLoveGoal(VillagerBase &);
    void _findMate(void)const;
    void _breed(VillagerBase &)const;
};
