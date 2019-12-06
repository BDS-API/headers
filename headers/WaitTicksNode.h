#pragma once

class WaitTicksNode : BehaviorNode {

public:
    virtual ~WaitTicksNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void WaitTicksNode(void);
};
