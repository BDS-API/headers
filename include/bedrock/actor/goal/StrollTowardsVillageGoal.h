#pragma once

#include <string>
#include "MoveToVillageGoal.h"


class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    ~StrollTowardsVillageGoal();
    virtual void _selectRandomPosInVillage();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
