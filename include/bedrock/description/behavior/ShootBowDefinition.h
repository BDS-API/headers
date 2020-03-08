#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class ShootBowDefinition : BehaviorDefinition {

public:
    virtual ShootBowDefinition::~ShootBowDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    ShootBowDefinition(void);
};
