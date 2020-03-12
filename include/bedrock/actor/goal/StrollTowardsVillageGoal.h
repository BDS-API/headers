#pragma once

#include "MoveToVillageGoal.h"
#include "../Mob.h"
#include <string>


class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _selectRandomPosInVillage();
    ~StrollTowardsVillageGoal();
    StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
