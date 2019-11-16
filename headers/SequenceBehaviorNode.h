#pragma once

class SequenceBehaviorNode : BehaviorNode {

    virtual ~SequenceBehaviorNode();
    virtual ~SequenceBehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);
}
