#pragma once

#include "../Actor"


class PlaceBlockNode : BehaviorNode {

public:
    virtual PlaceBlockNode::~PlaceBlockNode()
    virtual void tick(Actor &);

    PlaceBlockNode(void);
};
