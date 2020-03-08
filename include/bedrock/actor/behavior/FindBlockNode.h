#pragma once

#include "../Mob"
#include "../Actor"
#include "../../util/Vec3"


class FindBlockNode : BehaviorNode {

public:
    virtual FindBlockNode::~FindBlockNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindBlockNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
