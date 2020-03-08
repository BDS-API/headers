#pragma once

#include "../Mob"


class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    virtual StrollTowardsVillageGoal::~StrollTowardsVillageGoal()
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void _selectRandomPosInVillage();

    StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
