#pragma once

class EatBlockGoal : Goal {

public:
    virtual EatBlockGoal::~EatBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    EatBlockGoal(Mob &, DefinitionTrigger const&);
    void getEatAnimationTick(void);
};
