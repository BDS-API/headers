#pragma once

class InteractActionNode : BehaviorNode {

public:
    virtual ~InteractActionNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void InteractActionNode(void);
};
