#pragma once

class MoveIndoorsGoal : Goal {

public:
    virtual ~MoveIndoorsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> &)const;

    void MoveIndoorsGoal(Mob &, float, float);
    void _startPathfinding(void);
    void _isInside(BlockPos const&);
};
