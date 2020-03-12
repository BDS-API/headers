#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "Goal.h"
#include "../../util/Vec2.h"


class BreedGoal : Goal {

public:
    virtual void appendDebugInfo(std::string &)const;
    virtual void tick();
    virtual bool canUse();
    virtual bool canContinueToUse();
    ~BreedGoal();
    virtual void stop();
    void _breed();
    void _moveToFreePartner()const;
    BreedGoal(Mob &, float);
    void _isCloseEnoughToBreed(Vec3, Vec2, Vec3, Vec2)const;
};
