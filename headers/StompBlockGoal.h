#pragma once

class StompBlockGoal : BaseMoveToBlockGoal {

public:
    virtual ~StompBlockGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual bool isValidTarget(BlockSource &, BlockPos const&);
    virtual void _canReach(BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _createBreakProgressParticles(Level &, BlockSource &, BlockPos);
    virtual void _createDestroyParticles(Level &, BlockSource &, BlockPos);
    virtual void _playBreakProgressSound(Level &, BlockSource &, BlockPos);
    virtual void _playDestroySound(Level &, BlockSource &, BlockPos);

    void StompBlockGoal(Block const*, Mob &, double, int, int, int, float, int);
    void _getPosWithBlock(BlockPos)const;
};
