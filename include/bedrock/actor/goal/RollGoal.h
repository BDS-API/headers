#pragma once

#include "../Mob"
#include "../../util/Vec3"


class RollGoal : Goal {

public:
    virtual RollGoal::~RollGoal()
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual bool canBeInterrupted();
    virtual void start();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    RollGoal(Mob &, float);
    void _checkForDamagingBlocks()const;
    void _handleRoll(int, Vec3 &, float &, float &)const;
};
