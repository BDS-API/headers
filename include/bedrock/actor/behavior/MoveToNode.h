#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"
#include "../../util/Vec3.h"
#include "../Mob.h"


class MoveToNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    ~MoveToNode();
    virtual void initializeFromDefinition(Actor &);
    MoveToNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
