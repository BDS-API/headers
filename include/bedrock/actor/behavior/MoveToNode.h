#pragma once

#include "../Mob"
#include "../Actor"


class MoveToNode : BehaviorNode {

public:
    virtual MoveToNode::~MoveToNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveToNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
