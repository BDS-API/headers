#pragma once

class FollowTargetCaptainGoal : MoveTowardsTargetGoal {

public:
    virtual FollowTargetCaptainGoal::~FollowTargetCaptainGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    FollowTargetCaptainGoal(Mob &, float, float, float);
    void _determineMovePos(void);
};
