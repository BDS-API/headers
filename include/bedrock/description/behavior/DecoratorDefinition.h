#pragma once

#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "../../../json/Value.h"


class DecoratorDefinition : BehaviorDefinition {

public:
    ~DecoratorDefinition();
    DecoratorDefinition();
    void get()const;
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
