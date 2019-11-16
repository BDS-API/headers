#pragma once

class BehaviorNode {

    virtual ~BehaviorNode();
    virtual ~BehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
}
