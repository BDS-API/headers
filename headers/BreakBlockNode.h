#pragma once

class BreakBlockNode : BehaviorNode {

public:
    virtual ~BreakBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void BreakBlockNode(void);
};
