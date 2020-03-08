#pragma once

#include "../Actor"
#include "../Mob"
#include "../../util/Vec3"


class FindBlockNode : BehaviorNode {

public:
    FindBlockNode::~FindBlockNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindBlockNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
