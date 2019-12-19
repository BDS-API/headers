#pragma once

class PlaceBlockNode : BehaviorNode {

public:
    virtual PlaceBlockNode::~PlaceBlockNode();
    virtual void tick(Actor &);

    PlaceBlockNode(void);
};
