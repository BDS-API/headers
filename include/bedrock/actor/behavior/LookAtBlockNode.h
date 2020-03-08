#pragma once

#include "../Actor"


class LookAtBlockNode : BehaviorNode {

public:
    virtual LookAtBlockNode::~LookAtBlockNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    LookAtBlockNode(void);
};
