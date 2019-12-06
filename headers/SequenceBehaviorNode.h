#pragma once

class SequenceBehaviorNode : BehaviorNode {

public:
    virtual ~SequenceBehaviorNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void SequenceBehaviorNode(void);
    void getCount(void)const;
};
