#pragma once

class SitGoal : Goal {

public:
    virtual ~SitGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    void SitGoal(Mob &);
};
