#pragma once

class RepeatUntilFailureDefinition : DecoratorDefinition {

    virtual void ~RepeatUntilFailureDefinition();
    virtual void ~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void BehaviorDefinition::createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
