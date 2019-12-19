#pragma once

class ShootBowDefinition : BehaviorDefinition {

public:
    virtual ShootBowDefinition::~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    ShootBowDefinition(void);
};
