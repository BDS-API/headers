#pragma once

#include "BehaviorNode.h"


class UseActorNode : BehaviorNode {

public:
    ~UseActorNode(); // _ZN12UseActorNodeD2Ev
    virtual void tick(Actor &); // _ZN12UseActorNode4tickER5Actor
    UseActorNode(); // _ZN12UseActorNodeC2Ev
};
