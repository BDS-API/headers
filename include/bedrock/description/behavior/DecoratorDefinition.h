#pragma once

#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class DecoratorDefinition : BehaviorDefinition {

public:
    virtual ~DecoratorDefinition();

    DecoratorDefinition();
    void get()const;
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr);
};
