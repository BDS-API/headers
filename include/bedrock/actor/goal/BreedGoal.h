#pragma once

#include "../Mob"
#include "../../util/Vec3"
#include "../../util/Vec2"


class BreedGoal : Goal {

public:
    virtual BreedGoal::~BreedGoal()
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
