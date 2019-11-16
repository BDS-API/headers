#pragma once

class RepeatUntilFailureDefinition : DecoratorDefinition {

    virtual ~RepeatUntilFailureDefinition();
    virtual ~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
