#pragma once

class DecoratorDefinition : BehaviorDefinition {

    virtual void ~DecoratorDefinition();
    virtual void ~DecoratorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
