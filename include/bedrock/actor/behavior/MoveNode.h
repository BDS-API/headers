#pragma once

#include "../Actor"


class MoveNode : BehaviorNode {

public:
    MoveNode::~MoveNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveNode(void);
    void convertDirectionStringToKeyPress(std::string);
};
