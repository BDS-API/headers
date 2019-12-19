#pragma once

class LookAtActorNode : BehaviorNode {

public:
    virtual LookAtActorNode::~LookAtActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    LookAtActorNode(void);
};
