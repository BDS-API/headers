#pragma once

#include "../Actor"


class MoveNode : BehaviorNode {

public:
    virtual MoveNode::~MoveNode()
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    MoveNode(void);
    void convertDirectionStringToKeyPress(std::string);
};
