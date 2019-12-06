#pragma once

class SubtreeNode : BehaviorNode {

public:
    virtual ~SubtreeNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void SubtreeNode(void);
};
