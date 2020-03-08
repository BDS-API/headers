#pragma once

#include "../Actor"


class InteractActionNode : BehaviorNode {

public:
    virtual InteractActionNode::~InteractActionNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InteractActionNode(void);
};
