#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class ShootBowDefinition : BehaviorDefinition {

public:
    virtual ShootBowDefinition::~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    ShootBowDefinition(void);
};
