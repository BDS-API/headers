#pragma once

#include "../Actor"


class UseActorNode : BehaviorNode {

public:
    UseActorNode::~UseActorNode()
    virtual void tick(Actor &);

    UseActorNode(void);
};
