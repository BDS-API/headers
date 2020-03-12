#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class AttackDefinition : BehaviorDefinition {

public:
    ~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    AttackDefinition();
};
