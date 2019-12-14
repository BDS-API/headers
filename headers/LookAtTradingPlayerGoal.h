#pragma once

class LookAtTradingPlayerGoal : LookAtActorGoal {

public:
    virtual ~LookAtTradingPlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::string &)const;

    void LookAtTradingPlayerGoal(Mob &, float, float, int, int, int, int);
};
