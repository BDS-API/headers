#pragma once

#include "../Actor"


class WaitNode : BehaviorNode {

public:
    WaitNode::~WaitNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    WaitNode(void);
};
