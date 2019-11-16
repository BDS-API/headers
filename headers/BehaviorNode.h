#pragma once

class BehaviorNode {

    virtual void ~BehaviorNode();
    virtual void ~BehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
}
