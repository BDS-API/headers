#pragma once

class BehaviorDefinition {

public:
    virtual BehaviorDefinition::~BehaviorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;

    BehaviorDefinition(void);
    void getTreeDefinition(void)const;
};
