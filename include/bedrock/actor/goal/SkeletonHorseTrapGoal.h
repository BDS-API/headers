#pragma once

#include <string>
#include "Goal.h"


class SkeletonHorseTrapGoal : Goal {

public:
    ~SkeletonHorseTrapGoal(); // _ZN21SkeletonHorseTrapGoalD2Ev
    virtual bool canUse(); // _ZN21SkeletonHorseTrapGoal6canUseEv
    virtual void start(); // _ZN21SkeletonHorseTrapGoal5startEv
    virtual void tick(); // _ZN21SkeletonHorseTrapGoal4tickEv
    virtual void appendDebugInfo(std::string &)const; // _ZNK21SkeletonHorseTrapGoal15appendDebugInfoERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    SkeletonHorseTrapGoal(Horse &, int, float); // _ZN21SkeletonHorseTrapGoalC2ER5Horseif
    void _getClosestPlayer()const; // _ZNK21SkeletonHorseTrapGoal17_getClosestPlayerEv
//  void _createHorse(Difficulty const&); //TODO: incomplete function definition // _ZN21SkeletonHorseTrapGoal12_createHorseERK10Difficulty
//  void _createSkeleton(Difficulty const&, Horse const&); //TODO: incomplete function definition // _ZN21SkeletonHorseTrapGoal15_createSkeletonERK10DifficultyRK5Horse
};
