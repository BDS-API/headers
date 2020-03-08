#pragma once

#include "../Actor"


class FindActorNode : BehaviorNode {

public:
    virtual FindActorNode::~FindActorNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindActorNode(void);
};
