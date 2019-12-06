#pragma once

class InspectBookshelfGoal : MoveToBlockGoal {

public:
    virtual ~InspectBookshelfGoal();
    virtual bool canContinueToUse(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void findNearestBlock(void);

    void InspectBookshelfGoal(Mob &, float, int, int, int, float);
};
