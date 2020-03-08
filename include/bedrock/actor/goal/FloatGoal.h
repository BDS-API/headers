#pragma once

#include "../Mob"


class FloatGoal : Goal {

public:
    virtual FloatGoal::~FloatGoal();
    virtual bool canUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FloatGoal(Mob &);
};
