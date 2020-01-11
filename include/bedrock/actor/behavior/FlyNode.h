#pragma once

class FlyNode : BehaviorNode {

public:
    virtual FlyNode::~FlyNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FlyNode(void);
};