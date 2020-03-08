#pragma once

#include "../Mob"


class SitGoal : Goal {

public:
    virtual SitGoal::~SitGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void appendDebugInfo(std::string &)const;

    SitGoal(Mob &);
};
