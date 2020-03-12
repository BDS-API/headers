#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class ActivateToolDefinition : BehaviorDefinition {

public:
    ~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    ActivateToolDefinition();
};
