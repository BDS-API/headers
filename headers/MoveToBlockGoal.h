#pragma once

class MoveToBlockGoal : BaseMoveToGoal {

    virtual ~MoveToBlockGoal();
    virtual ~MoveToBlockGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void hasReachedTarget(void)const;
    virtual void isValidTarget(BlockSource &, BlockPos const&);
    virtual void _nextStartTick(void);
    virtual void _canReach(BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _getTargetPosition(void)const;
    virtual void _getRepathTime(void)const;
    virtual void findNearestBlock(void);
}
