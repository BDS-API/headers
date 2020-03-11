#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class InverterNode : BehaviorNode {

public:
    virtual ~InverterNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    InverterNode();
};
