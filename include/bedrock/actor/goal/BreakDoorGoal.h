#pragma once

class BreakDoorGoal : DoorInteractGoal {

public:
    virtual BreakDoorGoal::~BreakDoorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    BreakDoorGoal(Mob &);
    void getBreakRate(void)const;
};
