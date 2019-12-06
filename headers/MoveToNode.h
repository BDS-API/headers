#pragma once

class MoveToNode : BehaviorNode {

public:
    virtual ~MoveToNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void MoveToNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
