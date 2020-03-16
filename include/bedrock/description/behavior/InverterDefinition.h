#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class InverterDefinition : public DecoratorDefinition {

public:
    virtual ~InverterDefinition(); // _ZN18InverterDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18InverterDefinition4loadEN4Json5ValueERK15BehaviorFactory
    InverterDefinition(); // _ZN18InverterDefinitionC2Ev
};
