#pragma once

#include "../Actor.h"
#include "BehaviorNode.h"
#include <string>


class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
    ~GetInteractionPositionForBlockNode();
    GetInteractionPositionForBlockNode();
    void parseFacingNameFromString(std::string);
};
