#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class AttackDefinition : BehaviorDefinition {

public:
    virtual ~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    AttackDefinition();
};
