#pragma once

class RepeatUntilSuccessDefinition : DecoratorDefinition {

    virtual void ~RepeatUntilSuccessDefinition();
    virtual void ~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void BehaviorDefinition::createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
