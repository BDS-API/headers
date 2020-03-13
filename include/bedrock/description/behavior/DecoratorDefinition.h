#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"


class DecoratorDefinition : BehaviorDefinition {

public:
    ~DecoratorDefinition(); // _ZN19DecoratorDefinitionD2Ev
    DecoratorDefinition(); // _ZN19DecoratorDefinitionC2Ev
    void get()const; // _ZNK19DecoratorDefinition3getEv
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr); // _ZN19DecoratorDefinition27_decoratorLoadChildBehaviorEN4Json5ValueERK15BehaviorFactory25BehaviorTreeDefinitionPtr
};
