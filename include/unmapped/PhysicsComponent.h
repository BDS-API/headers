#pragma once

#include "../bedrock/actor/Actor.h"


class PhysicsComponent {

public:
    void setHasCollision(Actor &, bool);
    PhysicsComponent(PhysicsComponent &&);
    void setAffectedByGravity(Actor &, bool);
    bool isAffectedByGravity(Actor const&)const;
};
