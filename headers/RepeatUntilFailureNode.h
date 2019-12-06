#pragma once

class RepeatUntilFailureNode : BehaviorNode {

public:
    virtual ~RepeatUntilFailureNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void RepeatUntilFailureNode(void);
};
