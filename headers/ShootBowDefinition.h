#pragma once

class ShootBowDefinition : BehaviorDefinition {

    virtual void ~ShootBowDefinition();
    virtual void ~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
