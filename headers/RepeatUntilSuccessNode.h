#pragma once

class RepeatUntilSuccessNode : BehaviorNode {

public:
    virtual ~RepeatUntilSuccessNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void RepeatUntilSuccessNode(void);
};
