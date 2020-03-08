#pragma once

#include "../Mob"


class HoldGroundGoal : Goal {

public:
    virtual HoldGroundGoal::~HoldGroundGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    HoldGroundGoal(Mob &, float, bool, float, DefinitionTrigger const&, DefinitionTrigger const&);
};
