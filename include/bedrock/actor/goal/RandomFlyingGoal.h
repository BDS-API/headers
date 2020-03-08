#pragma once

#include "../Mob"
#include "../../util/Vec3"


class RandomFlyingGoal : RandomStrollGoal {

public:
    RandomFlyingGoal::~RandomFlyingGoal()
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _setWantedPosition();

    RandomFlyingGoal(Mob &, float, int, int, bool);
    void _getTreePos(Vec3 &)const;
};
