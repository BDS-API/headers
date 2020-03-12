#pragma once

#include "BehaviorNode.h"


class MoveToNode : BehaviorNode {

public:
    ~MoveToNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    MoveToNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
