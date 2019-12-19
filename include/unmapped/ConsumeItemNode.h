#pragma once

class ConsumeItemNode : BehaviorNode {

public:
    virtual ConsumeItemNode::~ConsumeItemNode();
    virtual void tick(Actor &);

    ConsumeItemNode(void);
};
