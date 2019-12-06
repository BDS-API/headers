#pragma once

class StrollTowardsVillageGoal : MoveToVillageGoal {

public:
    virtual ~StrollTowardsVillageGoal();
    virtual bool canUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void _selectRandomPosInVillage(void);

    void StrollTowardsVillageGoal(Mob &, float, float, float, int, float);
};
