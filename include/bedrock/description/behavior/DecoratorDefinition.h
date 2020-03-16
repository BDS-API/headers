#pragma once

#include "../../../unmapped/BehaviorTreeDefinitionPtr.h"
#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class DecoratorDefinition : public BehaviorDefinition {

public:
    virtual ~DecoratorDefinition(); // _ZN19DecoratorDefinitionD2Ev
    virtual void __fake_function0(); // fake
    DecoratorDefinition(); // _ZN19DecoratorDefinitionC2Ev
    void get()const; // _ZNK19DecoratorDefinition3getEv
    void _decoratorLoadChildBehavior(Json::Value, BehaviorFactory const&, BehaviorTreeDefinitionPtr); // _ZN19DecoratorDefinition27_decoratorLoadChildBehaviorEN4Json5ValueERK15BehaviorFactory25BehaviorTreeDefinitionPtr
};
