#pragma once

#include "../Mob"
#include "../Actor"


class LookAtActorGoal : Goal {

public:
    virtual LookAtActorGoal::~LookAtActorGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void getFilter(void);
    LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void _withinFieldOfView(Actor &);
};
