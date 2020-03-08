#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"
#include "../../../unmapped/BehaviorTreeDefinitionPtr"


class DecoratorDefinition : BehaviorDefinition {

public:
    DecoratorDefinition::~DecoratorDefinition()

    DecoratorDefinition(void);
    void get()const;
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
