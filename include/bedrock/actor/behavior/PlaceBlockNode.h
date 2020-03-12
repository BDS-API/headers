#pragma once

#include "BehaviorNode.h"


class PlaceBlockNode : BehaviorNode {

public:
    ~PlaceBlockNode();
    virtual void tick(Actor &);
    PlaceBlockNode();
};
