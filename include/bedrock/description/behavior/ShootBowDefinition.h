#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class ShootBowDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~ShootBowDefinition();
    ShootBowDefinition();
};
