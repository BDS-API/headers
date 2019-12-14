#pragma once

class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    virtual ~StrollTowardsVillageGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _selectRandomPosInVillage(void);

    void StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
