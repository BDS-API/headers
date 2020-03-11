#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class ShootBowDefinition : BehaviorDefinition {

public:
    virtual ~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    ShootBowDefinition();
};
