#pragma once

class ShootBowDefinition : BehaviorDefinition {

    virtual ~ShootBowDefinition();
    virtual ~ShootBowDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
