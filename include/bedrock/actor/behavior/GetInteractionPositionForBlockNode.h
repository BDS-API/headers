#pragma once

#include <string>
#include "BehaviorNode.h"


class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    virtual void tick(Actor &);
    ~GetInteractionPositionForBlockNode();
    void parseFacingNameFromString(std::string);
    GetInteractionPositionForBlockNode();
};
