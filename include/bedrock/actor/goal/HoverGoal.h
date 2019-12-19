#pragma once

class HoverGoal : Goal {

public:
    virtual HoverGoal::~HoverGoal();
    virtual bool canUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    HoverGoal(Mob &, float);
};
