#pragma once

#include "BehaviorNode.h"


class PlaceBlockNode : BehaviorNode {

public:
    ~PlaceBlockNode(); // _ZN14PlaceBlockNodeD2Ev
    virtual void tick(Actor &); // _ZN14PlaceBlockNode4tickER5Actor
    PlaceBlockNode(); // _ZN14PlaceBlockNodeC2Ev
};
