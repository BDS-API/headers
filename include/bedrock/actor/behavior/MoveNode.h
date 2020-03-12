#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"
#include <string>


class MoveNode : BehaviorNode {

public:
    ~MoveNode();
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    void convertDirectionStringToKeyPress(std::string);
    MoveNode();
};
