#pragma once

#include "../../util/Vec3.h"
#include "../Mob.h"
#include "./BehaviorNode.h"
#include "../Actor.h"


class FindBlockNode : BehaviorNode {

public:
    virtual ~FindBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    FindBlockNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
