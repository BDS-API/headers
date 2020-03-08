#pragma once

#include "../Actor"


class PlaceBlockNode : BehaviorNode {

public:
    PlaceBlockNode::~PlaceBlockNode()
    virtual void tick(Actor &);

    PlaceBlockNode(void);
};
