#pragma once

#include "../Actor"


class UseActorNode : BehaviorNode {

public:
    virtual UseActorNode::~UseActorNode()
    virtual void tick(Actor &);

    UseActorNode(void);
};
