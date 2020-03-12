#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"


class PlaceBlockNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~PlaceBlockNode();
    PlaceBlockNode();
};
