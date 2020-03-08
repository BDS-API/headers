#pragma once

#include "../Villager"


class PlayGoal : Goal {

public:
    virtual PlayGoal::~PlayGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    PlayGoal(Villager &, float);
};
