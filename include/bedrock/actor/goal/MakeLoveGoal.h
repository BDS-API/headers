#pragma once

#include <string>
#include "Goal.h"


class MakeLoveGoal : Goal {

public:
    virtual void stop();
    virtual void start();
    virtual bool canUse();
    virtual void tick();
    virtual bool canContinueToUse();
    virtual void appendDebugInfo(std::string &)const;
    ~MakeLoveGoal();
    void _breed(VillagerBase &)const;
    MakeLoveGoal(VillagerBase &);
    void _findMate()const;
};
