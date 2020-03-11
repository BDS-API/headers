#pragma once

#include "./Goal.h"
#include "../Horse.h"
#include <string>


class SkeletonHorseTrapGoal : Goal {

public:
    virtual ~SkeletonHorseTrapGoal();
    virtual bool canUse();
    virtual void start();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    SkeletonHorseTrapGoal(Horse &, int, float);
    void _getClosestPlayer()const;
//  void _createHorse(Difficulty const&); //TODO: incomplete function definition
//  void _createSkeleton(Difficulty const&, Horse const&); //TODO: incomplete function definition
};
