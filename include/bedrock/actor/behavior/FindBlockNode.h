#pragma once

#include "../Mob"
#include "../Actor"


class FindBlockNode : BehaviorNode {

public:
    virtual FindBlockNode::~FindBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindBlockNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
