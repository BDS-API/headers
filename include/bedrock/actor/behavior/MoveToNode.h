#pragma once

#include "../Actor"
#include "../Mob"
#include "../../util/Vec3"


class MoveToNode : BehaviorNode {

public:
    MoveToNode::~MoveToNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveToNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
