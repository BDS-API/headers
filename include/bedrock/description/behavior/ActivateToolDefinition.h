#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class ActivateToolDefinition : BehaviorDefinition {

public:
    ~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    ActivateToolDefinition();
};
