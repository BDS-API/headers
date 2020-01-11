#pragma once

class AttackNode : BehaviorNode {

public:
    virtual AttackNode::~AttackNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    AttackNode(void);
};
