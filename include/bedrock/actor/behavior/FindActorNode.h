#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"


class FindActorNode : BehaviorNode {

public:
    virtual ~FindActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindActorNode();
};
