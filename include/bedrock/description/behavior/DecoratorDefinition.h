#pragma once

#include "../../../json/Value.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class DecoratorDefinition : BehaviorDefinition {

public:
    ~DecoratorDefinition();
    void get()const;
    DecoratorDefinition();
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
