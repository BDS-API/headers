#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    ~RepeatUntilSuccessDefinition(); // _ZN28RepeatUntilSuccessDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN28RepeatUntilSuccessDefinition4loadEN4Json5ValueERK15BehaviorFactory
    RepeatUntilSuccessDefinition(); // _ZN28RepeatUntilSuccessDefinitionC2Ev
};
