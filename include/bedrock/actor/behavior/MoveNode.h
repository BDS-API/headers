#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"
#include <string>


class MoveNode : BehaviorNode {

public:
    virtual ~MoveNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveNode();
    void convertDirectionStringToKeyPress(std::string);
};
