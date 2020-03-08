#pragma once

#include "../Mob"


class SlimeKeepOnJumpingGoal : Goal {

public:
    SlimeKeepOnJumpingGoal::~SlimeKeepOnJumpingGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeKeepOnJumpingGoal(Mob &);
};
