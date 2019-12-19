#pragma once

class SquidMoveAwayFromGroundGoal : Goal {

public:
    virtual SquidMoveAwayFromGroundGoal::~SquidMoveAwayFromGroundGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SquidMoveAwayFromGroundGoal(Squid &);
};
