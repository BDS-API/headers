#pragma once

class SwimWanderGoal : Goal {

public:
    virtual ~SwimWanderGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SwimWanderGoal(Mob &, float, float, int);
    void _setWantedPosition(void);
    void wanderComplete(void);
};
