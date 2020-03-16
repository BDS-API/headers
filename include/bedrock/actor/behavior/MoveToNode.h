#pragma once

#include "BehaviorNode.h"


class MoveToNode : public BehaviorNode {

public:
    virtual ~MoveToNode(); // _ZN10MoveToNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN10MoveToNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN10MoveToNode24initializeFromDefinitionER5Actor
    MoveToNode(); // _ZN10MoveToNodeC2Ev
    void lookAt(Mob &, Vec3 const&, float, float); // _ZN10MoveToNode6lookAtER3MobRK4Vec3ff
};
