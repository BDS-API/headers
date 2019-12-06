#pragma once

class SelectorBehaviorNode : BehaviorNode {

public:
    virtual ~SelectorBehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void SelectorBehaviorNode(void);
};
