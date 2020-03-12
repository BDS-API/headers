#pragma once

#include "../VillagerBase.h"
#include "Goal.h"
#include <string>


class MakeLoveGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void start();
    virtual void appendDebugInfo(std::string &)const;
    virtual bool canUse();
    ~MakeLoveGoal();
    virtual void tick();
    MakeLoveGoal(VillagerBase &);
    void _breed(VillagerBase &)const;
    void _findMate()const;
};
