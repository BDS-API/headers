#pragma once

#include "../Actor"


class InteractActionNode : BehaviorNode {

public:
    InteractActionNode::~InteractActionNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InteractActionNode(void);
};
