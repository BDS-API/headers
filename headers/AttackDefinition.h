#pragma once

class AttackDefinition : BehaviorDefinition {

    virtual ~AttackDefinition();
    virtual ~AttackDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
