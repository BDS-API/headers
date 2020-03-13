#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    ~RepeatUntilFailureDefinition(); // _ZN28RepeatUntilFailureDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN28RepeatUntilFailureDefinition4loadEN4Json5ValueERK15BehaviorFactory
    RepeatUntilFailureDefinition(); // _ZN28RepeatUntilFailureDefinitionC2Ev
};
