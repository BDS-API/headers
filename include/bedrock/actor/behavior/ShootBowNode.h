#pragma once

#include "../Actor"


class ShootBowNode : BehaviorNode {

public:
    ShootBowNode::~ShootBowNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    ShootBowNode(void);
};
