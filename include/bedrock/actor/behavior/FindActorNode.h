#pragma once

#include "../Actor"


class FindActorNode : BehaviorNode {

public:
    FindActorNode::~FindActorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindActorNode(void);
};
