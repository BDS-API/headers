#pragma once

#include <string>
#include "RandomStrollGoal.h"


class RandomFlyingGoal : RandomStrollGoal {

public:
    virtual bool canUse();
    ~RandomFlyingGoal();
    virtual void _setWantedPosition();
    virtual void appendDebugInfo(std::string &)const;
    void _getTreePos(Vec3 &)const;
    RandomFlyingGoal(Mob &, float, int, int, bool);
};
