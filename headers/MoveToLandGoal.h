#pragma once

class MoveToLandGoal : MoveToBlockGoal {

public:
    virtual ~MoveToLandGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _moveToBlock(void);

    void MoveToLandGoal(Mob &, float, int, int, int, float);
};
