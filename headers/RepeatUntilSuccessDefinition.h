#pragma once

class RepeatUntilSuccessDefinition : DecoratorDefinition {

    virtual ~RepeatUntilSuccessDefinition();
    virtual ~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
