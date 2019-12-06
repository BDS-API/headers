#pragma once

class MoveToWaterGoal : MoveToBlockGoal {

public:
    virtual ~MoveToWaterGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    void MoveToWaterGoal(Mob &, float, int, int, int, float);
};
