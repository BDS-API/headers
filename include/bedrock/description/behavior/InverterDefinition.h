#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class InverterDefinition : DecoratorDefinition {

public:
    ~InverterDefinition(); // _ZN18InverterDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18InverterDefinition4loadEN4Json5ValueERK15BehaviorFactory
    InverterDefinition(); // _ZN18InverterDefinitionC2Ev
};
