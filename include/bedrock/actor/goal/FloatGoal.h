#pragma once

#include "../Mob"


class FloatGoal : Goal {

public:
    virtual FloatGoal::~FloatGoal()
    virtual bool canUse();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    FloatGoal(Mob &);
};
