#pragma once

#include "../../util/Vec3.h"
#include "../Mob.h"
#include "./BehaviorNode.h"
#include "../Actor.h"


class MoveToNode : BehaviorNode {

public:
    virtual ~MoveToNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveToNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
