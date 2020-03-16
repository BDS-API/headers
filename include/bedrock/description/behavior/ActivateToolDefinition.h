#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class ActivateToolDefinition : public BehaviorDefinition {

public:
    virtual ~ActivateToolDefinition(); // _ZN22ActivateToolDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN22ActivateToolDefinition4loadEN4Json5ValueERK15BehaviorFactory
    ActivateToolDefinition(); // _ZN22ActivateToolDefinitionC2Ev
};
