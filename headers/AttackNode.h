#pragma once

class AttackNode : BehaviorNode {

public:
    virtual ~AttackNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void AttackNode(void);
};
