#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class AttackDefinition : BehaviorDefinition {

public:
    virtual AttackDefinition::~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    AttackDefinition(void);
};
