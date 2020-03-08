#pragma once

#include "../Villager"


class PlayGoal : Goal {

public:
    virtual PlayGoal::~PlayGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    PlayGoal(Villager &, float);
};
