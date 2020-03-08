#pragma once

#include "../Actor"


class ShootBowNode : BehaviorNode {

public:
    virtual ShootBowNode::~ShootBowNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ShootBowNode(void);
};
