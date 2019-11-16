#pragma once

class SquidMoveAwayFromGroundGoal : Goal {

    virtual void SquidMoveAwayFromGround~SquidMoveAwayFromGroundGoal();
    virtual void SquidMoveAwayFromGround~SquidMoveAwayFromGroundGoal();
    virtual void SquidMoveAwayFromGroundcanUse(void);
    virtual void SquidMoveAwayFromGroundcanContinueToUse(void);
    virtual void canBeInterrupted(void);
    virtual void SquidMoveAwayFromGroundstart(void);
    virtual void SquidMoveAwayFromGroundstop(void);
    virtual void SquidMoveAwayFromGroundtick(void);
    virtual void SquidMoveAwayFromGroundappendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;
    virtual void isTargetGoal(void)const;
    virtual void onPlayerDimensionChanged(Player *, AutomaticID<Dimension, int>);
}
