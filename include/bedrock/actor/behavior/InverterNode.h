#pragma once

#include "BehaviorNode.h"


class InverterNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~InverterNode();
    virtual void initializeFromDefinition(Actor &);
    InverterNode();
};
