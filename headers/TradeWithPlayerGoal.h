#pragma once

class TradeWithPlayerGoal : Goal {

public:
    virtual ~TradeWithPlayerGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void TradeWithPlayerGoal(Mob &);
};
