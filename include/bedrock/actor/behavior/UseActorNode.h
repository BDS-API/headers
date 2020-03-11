#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class UseActorNode : BehaviorNode {

public:
    virtual ~UseActorNode();
    virtual void tick(Actor &);

    UseActorNode();
};
