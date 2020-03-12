#pragma once

#include "BehaviorNode.h"


class ConsumeItemNode : BehaviorNode {

public:
    ~ConsumeItemNode();
    virtual void tick(Actor &);
    ConsumeItemNode();
};
