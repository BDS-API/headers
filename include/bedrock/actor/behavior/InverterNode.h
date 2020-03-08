#pragma once

#include "../Actor"


class InverterNode : BehaviorNode {

public:
    InverterNode::~InverterNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InverterNode(void);
};
