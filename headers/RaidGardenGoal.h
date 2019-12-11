#pragma once

class RaidGardenGoal : BaseMoveToBlockGoal {

public:
    virtual ~RaidGardenGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);

    void RaidGardenGoal(Mob &, float, int, int, int, float, int, int, int, int, std::set<Block const*, std::less<Block const*>, std::allocator<Block const*>> const&);
};
