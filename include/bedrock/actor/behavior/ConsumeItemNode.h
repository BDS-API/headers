#pragma once

#include "../Actor"


class ConsumeItemNode : BehaviorNode {

public:
    ConsumeItemNode::~ConsumeItemNode()
    virtual void tick(Actor &);

    ConsumeItemNode(void);
};
