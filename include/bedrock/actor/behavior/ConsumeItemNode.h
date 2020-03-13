#pragma once

#include "BehaviorNode.h"


class ConsumeItemNode : BehaviorNode {

public:
    ~ConsumeItemNode(); // _ZN15ConsumeItemNodeD2Ev
    virtual void tick(Actor &); // _ZN15ConsumeItemNode4tickER5Actor
    ConsumeItemNode(); // _ZN15ConsumeItemNodeC2Ev
};
