#pragma once

class StompAttackGoal : MeleeAttackGoal {

public:
    virtual StompAttackGoal::~StompAttackGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _attemptAttackTarget(Actor *);

    StompAttackGoal(Mob &, float, bool, float, ActorCategory, int, float, bool, int, bool);
};
