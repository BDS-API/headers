#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class ShootBowDefinition : BehaviorDefinition {

public:
    ~ShootBowDefinition(); // _ZN18ShootBowDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18ShootBowDefinition4loadEN4Json5ValueERK15BehaviorFactory
    ShootBowDefinition(); // _ZN18ShootBowDefinitionC2Ev
};
