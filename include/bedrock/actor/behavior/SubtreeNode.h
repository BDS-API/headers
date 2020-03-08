#pragma once

#include "../Actor"


class SubtreeNode : BehaviorNode {

public:
    SubtreeNode::~SubtreeNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    SubtreeNode(void);
};
