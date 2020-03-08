#pragma once

#include "../Mob"


class SlimeKeepOnJumpingGoal : Goal {

public:
    virtual SlimeKeepOnJumpingGoal::~SlimeKeepOnJumpingGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    SlimeKeepOnJumpingGoal(Mob &);
};
