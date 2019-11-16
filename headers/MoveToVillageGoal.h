#pragma once

class MoveToVillageGoal : BaseMoveToGoal {

    virtual void ~MoveToVillageGoal();
    virtual void ~MoveToVillageGoal();
    virtual void canUse(void);
    virtual void canContinueToUse(void);
    virtual void Goal::canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void Goal::isTargetGoal(void)const;
    virtual void Goal::onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void hasReachedTarget(void)const;
    virtual void isValidTarget(BlockSource &, BlockPos const&);
    virtual void _nextStartTick(void);
    virtual void _canReach(BlockPos const&);
    virtual void _moveToBlock(void);
    virtual void _getTargetPosition(void)const;
    virtual void _getRepathTime(void)const;
    virtual void _selectRandomPosInVillage(void);
}
