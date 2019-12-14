#pragma once

class SwimWithMobGoal : Goal {

public:
    virtual ~SwimWithMobGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void SwimWithMobGoal(Mob &, float, float, int, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void _setWantedMob(void);
    void _canSwimWith(Actor &);
};
