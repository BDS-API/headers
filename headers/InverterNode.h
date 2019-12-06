#pragma once

class InverterNode : BehaviorNode {

public:
    virtual ~InverterNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void InverterNode(void);
};
