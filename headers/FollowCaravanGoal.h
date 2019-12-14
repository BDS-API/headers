#pragma once

class FollowCaravanGoal : Goal {

public:
    virtual ~FollowCaravanGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    void FollowCaravanGoal(Mob &, float, int, std::vector<MobDescriptor, std::allocator<MobDescriptor>> const&);
    void firstIsLeashed(Mob *, int);
    void checkCaravanType(Mob *);
};
