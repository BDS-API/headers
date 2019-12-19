#pragma once

class AttackDefinition : BehaviorDefinition {

public:
    virtual AttackDefinition::~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    AttackDefinition(void);
};
