#pragma once

class RestrictSunGoal : Goal {

public:
    virtual ~RestrictSunGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void RestrictSunGoal(Mob &);
};
