#pragma once

class ShootBowDefinition : BehaviorDefinition {

public:
    virtual ~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void ShootBowDefinition(void);
};
