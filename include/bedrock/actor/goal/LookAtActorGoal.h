#pragma once

#include "../Actor"
#include "../Mob"


class LookAtActorGoal : Goal {

public:
    LookAtActorGoal::~LookAtActorGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    void getFilter();
    LookAtActorGoal(Mob &, float, float, int, int, int, int);
    void _withinFieldOfView(Actor &);
};
