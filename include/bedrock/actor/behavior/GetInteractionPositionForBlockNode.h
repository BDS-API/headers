#pragma once

#include "../Actor"


class GetInteractionPositionForBlockNode : BehaviorNode {

public:
    GetInteractionPositionForBlockNode::~GetInteractionPositionForBlockNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    GetInteractionPositionForBlockNode(void);
    void parseFacingNameFromString(std::string);
};
