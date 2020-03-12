#pragma once

#include "Goal.h"
#include <string>
#include "../Horse.h"


class SkeletonHorseTrapGoal : Goal {

public:
    virtual void start();
    ~SkeletonHorseTrapGoal();
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    void _getClosestPlayer()const;
//  void _createSkeleton(Difficulty const&, Horse const&); //TODO: incomplete function definition
//  void _createHorse(Difficulty const&); //TODO: incomplete function definition
    SkeletonHorseTrapGoal(Horse &, int, float);
};
