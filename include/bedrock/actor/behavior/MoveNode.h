#pragma once

#include <string>
#include "BehaviorNode.h"


class MoveNode : BehaviorNode {

public:
    ~MoveNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    MoveNode();
    void convertDirectionStringToKeyPress(std::string);
};
