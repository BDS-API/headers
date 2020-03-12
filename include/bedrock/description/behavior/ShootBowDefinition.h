#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class ShootBowDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~ShootBowDefinition();
    ShootBowDefinition();
};
