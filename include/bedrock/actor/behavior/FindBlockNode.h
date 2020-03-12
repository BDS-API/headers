#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"
#include "../../util/Vec3.h"
#include "../Mob.h"


class FindBlockNode : BehaviorNode {

public:
    ~FindBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    FindBlockNode();
    void lookAt(Mob &, Vec3 const&, float, float);
};
