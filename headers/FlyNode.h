#pragma once

class FlyNode : BehaviorNode {

public:
    virtual ~FlyNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void FlyNode(void);
};
