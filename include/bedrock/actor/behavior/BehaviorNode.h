#pragma once



class BehaviorNode {

public:
    ~BehaviorNode(); // _ZN12BehaviorNodeD2Ev
    virtual void initializeFromDefinition(Actor &); // _ZN12BehaviorNode24initializeFromDefinitionER5Actor
    BehaviorNode(); // _ZN12BehaviorNodeC2Ev
    void getStatus()const; // _ZNK12BehaviorNode9getStatusEv
    void getBehaviorTreeDefinition(); // _ZN12BehaviorNode25getBehaviorTreeDefinitionEv
    void setComponent(BehaviorComponent *); // _ZN12BehaviorNode12setComponentEP17BehaviorComponent
    void getBehaviorData(); // _ZN12BehaviorNode15getBehaviorDataEv
};
