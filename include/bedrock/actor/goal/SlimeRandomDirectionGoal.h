#pragma once

#include "../Mob"


class SlimeRandomDirectionGoal : Goal {

public:
    virtual SlimeRandomDirectionGoal::~SlimeRandomDirectionGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SlimeRandomDirectionGoal(Mob &);
};
