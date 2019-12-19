#pragma once

class MoveIndoorsGoal : Goal {

public:
    virtual MoveIndoorsGoal::~MoveIndoorsGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    MoveIndoorsGoal(Mob &, float, float);
    void _startPathfinding(void);
    void _isInside(BlockPos const&);
};
