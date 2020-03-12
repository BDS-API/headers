#pragma once



class BehaviorNode {

public:
    virtual void initializeFromDefinition(Actor &);
    ~BehaviorNode();
    void getStatus()const;
    void setComponent(BehaviorComponent *);
    void getBehaviorData();
    BehaviorNode();
    void getBehaviorTreeDefinition();
};
