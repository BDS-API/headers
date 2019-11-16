#pragma once

class DecoratorDefinition : BehaviorDefinition {

    virtual void DecoratorDefinition::~DecoratorDefinition();
    virtual void DecoratorDefinition::~DecoratorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    virtual void createNode(Actor &, BehaviorFactory const&, BehaviorNode *, BehaviorData *)const;
}
