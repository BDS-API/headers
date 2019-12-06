#pragma once

class ActivateToolNode : BehaviorNode {

public:
    virtual ~ActivateToolNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void ActivateToolNode(void);
};
