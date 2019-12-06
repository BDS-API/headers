#pragma once

class UseActorNode : BehaviorNode {

public:
    virtual ~UseActorNode();
    virtual void tick(Actor &);

    void UseActorNode(void);
};
