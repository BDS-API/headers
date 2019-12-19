#pragma once

class RestrictSunGoal : Goal {

public:
    virtual RestrictSunGoal::~RestrictSunGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    RestrictSunGoal(Mob &);
};
