#pragma once

class FindBlockNode : BehaviorNode {

public:
    virtual ~FindBlockNode();
    virtual void tick(Actor &);
    virtual void initializeFromDefinition(Actor &);

    void FindBlockNode(void);
    void lookAt(Mob &, Vec3 const&, float, float);
};
