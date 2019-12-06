#pragma once

class DecoratorDefinition : BehaviorDefinition {

public:
    virtual ~DecoratorDefinition();

    void DecoratorDefinition(void);
    void get(void)const;
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
