#pragma once

#include "../Mob"
#include "../Actor"
#include "../../util/Vec3"


class MoveToNode : BehaviorNode {

public:
    virtual MoveToNode::~MoveToNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveToNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
