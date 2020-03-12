#pragma once

#include <string>
#include "Goal.h"


class SkeletonHorseTrapGoal : Goal {

public:
    ~SkeletonHorseTrapGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    virtual void tick();
    virtual void start();
    SkeletonHorseTrapGoal(Horse &, int, float);
//  void _createHorse(Difficulty const&); //TODO: incomplete function definition
//  void _createSkeleton(Difficulty const&, Horse const&); //TODO: incomplete function definition
    void _getClosestPlayer()const;
};
