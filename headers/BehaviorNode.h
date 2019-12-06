#pragma once

class BehaviorNode {

public:
    virtual ~BehaviorNode();
    virtual void initializeFromDefinition(Actor &);

    void BehaviorNode(void);
    void getStatus(void)const;
    void getBehaviorTreeDefinition(void);
    void setComponent(BehaviorComponent *);
    void getBehaviorData(void);
};
