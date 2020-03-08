#pragma once

#include "../Guardian"


class GuardianAttackGoal : Goal {

public:
    virtual GuardianAttackGoal::~GuardianAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    GuardianAttackGoal(Guardian &);
};
