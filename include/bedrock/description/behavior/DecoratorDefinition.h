#pragma once

class DecoratorDefinition : BehaviorDefinition {

public:
    virtual DecoratorDefinition::~DecoratorDefinition();

    DecoratorDefinition(void);
    void get(void)const;
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
