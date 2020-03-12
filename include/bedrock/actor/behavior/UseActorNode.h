#pragma once

#include "BehaviorNode.h"


class UseActorNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~UseActorNode();
    UseActorNode();
};
