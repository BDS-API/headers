#pragma once

class ActivateToolNode : BehaviorNode {

public:
    virtual ActivateToolNode::~ActivateToolNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ActivateToolNode(void);
};
