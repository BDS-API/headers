#pragma once

class MountPathingGoal : Goal {

public:
    virtual ~MountPathingGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;
    virtual void _getAttackReachSqr(void);

    void _init(float, float, bool);
    void MountPathingGoal(Mob &, float, float, bool);
};
