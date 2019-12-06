#pragma once

class ConsumeItemNode : BehaviorNode {

public:
    virtual ~ConsumeItemNode();
    virtual void tick(Actor &);

    void ConsumeItemNode(void);
};
