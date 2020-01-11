#pragma once

class RepeatUntilFailureNode : BehaviorNode {

public:
    virtual RepeatUntilFailureNode::~RepeatUntilFailureNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    RepeatUntilFailureNode(void);
};
