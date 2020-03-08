#pragma once

#include "../Horse"


class SkeletonHorseTrapGoal : Goal {

public:
    virtual SkeletonHorseTrapGoal::~SkeletonHorseTrapGoal()
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SkeletonHorseTrapGoal(Horse &, int, float);
    void _getClosestPlayer()const;
    void _createHorse(Difficulty const&);
    void _createSkeleton(Difficulty const&, Horse const&);
};
