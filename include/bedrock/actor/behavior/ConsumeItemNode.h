#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class ConsumeItemNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~ConsumeItemNode();
    ConsumeItemNode();
};
