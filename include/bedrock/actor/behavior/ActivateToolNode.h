#pragma once

#include "../Actor"


class ActivateToolNode : BehaviorNode {

public:
    ActivateToolNode::~ActivateToolNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ActivateToolNode(void);
};
