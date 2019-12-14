#pragma once

class MoveNode : BehaviorNode {

public:
    virtual ~MoveNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void MoveNode(void);
    void convertDirectionStringToKeyPress(std::string);
};
