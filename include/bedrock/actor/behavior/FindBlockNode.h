#pragma once

#include "BehaviorNode.h"


class FindBlockNode : public BehaviorNode {

public:
    virtual ~FindBlockNode(); // _ZN13FindBlockNodeD2Ev
    virtual void __fake_function0(); // fake
    virtual void tick(Actor &); // _ZN13FindBlockNode4tickER5Actor
    virtual void initializeFromDefinition(Actor &); // _ZN13FindBlockNode24initializeFromDefinitionER5Actor
    FindBlockNode(); // _ZN13FindBlockNodeC2Ev
    void lookAt(Mob &, Vec3 const&, float, float); // _ZN13FindBlockNode6lookAtER3MobRK4Vec3ff
};
