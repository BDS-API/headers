#pragma once

class LookAtBlockNode : BehaviorNode {

public:
    virtual ~LookAtBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void LookAtBlockNode(void);
};
