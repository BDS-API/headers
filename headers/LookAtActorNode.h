#pragma once

class LookAtActorNode : BehaviorNode {

public:
    virtual ~LookAtActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void LookAtActorNode(void);
};
