#pragma once

class WaitTicksNode : BehaviorNode {

public:
    virtual WaitTicksNode::~WaitTicksNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    WaitTicksNode(void);
};
