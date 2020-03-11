#pragma once

#include "../bedrock/actor/Actor.h"
#include "./PhysicsComponent.h"


class PhysicsComponent {

public:

    void setAffectedByGravity(Actor &, bool);
    bool isAffectedByGravity(Actor const&)const;
    void setHasCollision(Actor &, bool);
    PhysicsComponent(PhysicsComponent &&);
};
