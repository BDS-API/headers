#pragma once

class InverterDefinition : DecoratorDefinition {

    virtual void ~InverterDefinition();
    virtual void ~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void BehaviorDefinition::createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
