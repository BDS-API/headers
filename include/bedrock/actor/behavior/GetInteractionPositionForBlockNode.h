#pragma once

#include "../Actor.h"
#include "./BehaviorNode.h"
#include <string>


class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    virtual ~GetInteractionPositionForBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    GetInteractionPositionForBlockNode();
    void parseFacingNameFromString(std::string);
};
