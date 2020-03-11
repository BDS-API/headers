#pragma once

#include "../Mob.h"
#include <string>
#include "./MoveToVillageGoal.h"


class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    virtual ~StrollTowardsVillageGoal();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _selectRandomPosInVillage();

    StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
