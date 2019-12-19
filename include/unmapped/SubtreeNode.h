#pragma once

class SubtreeNode : BehaviorNode {

public:
    virtual SubtreeNode::~SubtreeNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SubtreeNode(void);
};
