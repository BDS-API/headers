#pragma once

#include <string>
#include "../../util/Vec3.h"
#include "../Mob.h"
#include "../../util/Vec2.h"
#include "Goal.h"


class BreedGoal : Goal {

public:
    virtual bool canContinueToUse();
    virtual bool canUse();
    virtual void appendDebugInfo(std::string &)const;
    virtual void stop();
    virtual void tick();
    ~BreedGoal();
    void _isCloseEnoughToBreed(Vec3, Vec2, Vec3, Vec2)const;
    void _moveToFreePartner()const;
    BreedGoal(Mob &, float);
    void _breed();
};
