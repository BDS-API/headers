#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class PlaceBlockNode : BehaviorNode {

public:
    virtual ~PlaceBlockNode();
    virtual void tick(Actor &);

    PlaceBlockNode();
};
