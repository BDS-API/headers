#pragma once

class BaseMoveToGoal : Goal {

    virtual void BaseMoveTo~BaseMoveToGoal();
    virtual void BaseMoveTo~BaseMoveToGoal();
    virtual void BaseMoveTocanUse(void);
    virtual void BaseMoveTocanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void BaseMoveTostart(void);
    virtual void BaseMoveTostop(void);
    virtual void BaseMoveTotick(void);
    virtual void BaseMoveToappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
    virtual void BaseMoveTohasReachedTarget(void)const;
    virtual void BaseMoveToisValidTarget(BlockSource &, BlockPos const&);
    virtual void BaseMoveTo_nextStartTick(void);
    virtual void BaseMoveTo_canReach(BlockPos const&);
    virtual void BaseMoveTo_moveToBlock(void);
    virtual void BaseMoveTo_getTargetPosition(void)const;
    virtual void BaseMoveTo_getRepathTime(void)const;
}
