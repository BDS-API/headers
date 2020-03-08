#pragma once

#include "../VillagerBase"


class MakeLoveGoal : Goal {

public:
    virtual MakeLoveGoal::~MakeLoveGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    MakeLoveGoal(VillagerBase &);
    void _findMate()const;
    void _breed(VillagerBase &)const;
};
