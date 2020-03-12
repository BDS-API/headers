#pragma once

#include "../../util/Vec3.h"
#include "RandomStrollGoal.h"
#include <string>
#include "../Mob.h"


class RandomFlyingGoal : RandomStrollGoal {

public:
    virtual void appendDebugInfo(std::string &)const;
    ~RandomFlyingGoal();
    virtual void _setWantedPosition();
    virtual bool canUse();
    void _getTreePos(Vec3 &)const;
    RandomFlyingGoal(Mob &, float, int, int, bool);
};
