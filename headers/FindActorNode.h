#pragma once

class FindActorNode : BehaviorNode {

public:
    virtual ~FindActorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void FindActorNode(void);
};
