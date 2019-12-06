#pragma once

class ShootBowNode : BehaviorNode {

public:
    virtual ~ShootBowNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void ShootBowNode(void);
};
