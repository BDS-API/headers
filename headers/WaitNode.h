#pragma once

class WaitNode : BehaviorNode {

public:
    virtual ~WaitNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void WaitNode(void);
};
