#pragma once

#include "../Actor"


class InverterNode : BehaviorNode {

public:
    virtual InverterNode::~InverterNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InverterNode(void);
};
