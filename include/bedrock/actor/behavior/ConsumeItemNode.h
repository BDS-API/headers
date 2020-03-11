#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class ConsumeItemNode : BehaviorNode {

public:
    virtual ~ConsumeItemNode();
    virtual void tick(Actor &);

    ConsumeItemNode();
};
