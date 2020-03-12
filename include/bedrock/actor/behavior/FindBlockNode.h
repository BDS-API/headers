#pragma once

#include "BehaviorNode.h"


class FindBlockNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~FindBlockNode();
    virtual void initializeFromDefinition(Actor &);
    FindBlockNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
