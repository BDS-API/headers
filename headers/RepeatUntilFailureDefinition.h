#pragma once

class RepeatUntilFailureDefinition : DecoratorDefinition {

    virtual void RepeatUntilFailureDefinition::~RepeatUntilFailureDefinition();
    virtual void RepeatUntilFailureDefinition::~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
