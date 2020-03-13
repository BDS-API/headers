#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class ActivateToolDefinition : BehaviorDefinition {

public:
    ~ActivateToolDefinition(); // _ZN22ActivateToolDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN22ActivateToolDefinition4loadEN4Json5ValueERK15BehaviorFactory
    ActivateToolDefinition(); // _ZN22ActivateToolDefinitionC2Ev
};
