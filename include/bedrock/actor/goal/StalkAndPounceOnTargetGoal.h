#pragma once

class StalkAndPounceOnTargetGoal : Goal {

public:
    virtual StalkAndPounceOnTargetGoal::~StalkAndPounceOnTargetGoal();
    virtual bool canUse(void);
    virtual bool canContinueToUse(void);
    virtual bool canBeInterrupted(void);
    virtual void start(void);
    virtual void stop(void);
    virtual void tick(void);
    virtual void appendDebugInfo(std::string &)const;

    StalkAndPounceOnTargetGoal(Mob &, ActorFilterGroup const&, float, float, float, float, float, float, float, float);
    void _stalkPrey(Vec3 const&, Vec3 const&);
    void _preparePounce(Vec3 const&, Vec3 const&);
    void _attemptToStrike(Vec3 const&, Vec3 const&);
    void _hasPreyDiedMidAir(void)const;
    void _isStuckBlock(BlockPos)const;
    void _stuck(void);
    void _pounce(Vec3 const&, Vec3 const&)const;
    void _isPouncePathClear(Vec3 const&, Vec3 const&)const;
};
