#pragma once

#include "../../util/Vec3.h"
#include "./RandomStrollGoal.h"
#include "../Mob.h"
#include <string>


class RandomFlyingGoal : RandomStrollGoal {

public:
    virtual ~RandomFlyingGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomFlyingGoal(Mob &, float, int, int, bool);
    void _getTreePos(Vec3 &)const;
};
