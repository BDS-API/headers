#pragma once

class UseActorNode : BehaviorNode {

public:
    virtual UseActorNode::~UseActorNode();
    virtual void tick(Actor &);

    UseActorNode(void);
};
