#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class AttackDefinition : BehaviorDefinition {

public:
    virtual AttackDefinition::~AttackDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    AttackDefinition(void);
};
