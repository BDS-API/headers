#pragma once

#include "../Actor"


class RepeatUntilFailureNode : BehaviorNode {

public:
    RepeatUntilFailureNode::~RepeatUntilFailureNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilFailureNode(void);
};
