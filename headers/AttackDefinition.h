#pragma once

class AttackDefinition : BehaviorDefinition {

public:
    virtual ~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void AttackDefinition(void);
};
