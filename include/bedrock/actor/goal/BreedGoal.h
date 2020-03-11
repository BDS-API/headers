#pragma once

#include "../../util/Vec3.h"
#include "../../util/Vec2.h"
#include "./Goal.h"
#include "../Mob.h"
#include <string>


class BreedGoal : Goal {

public:
    virtual ~BreedGoal();
    virtual bool canUse();
    virtual bool canContinueToUse();
    virtual void stop();
    virtual void tick();
    virtual void appendDebugInfo(std::string &)const;

    BreedGoal(Mob &, float);
    void _moveToFreePartner()const;
    void _isCloseEnoughToBreed(Vec3, Vec2, Vec3, Vec2)const;
    void _breed();
};
