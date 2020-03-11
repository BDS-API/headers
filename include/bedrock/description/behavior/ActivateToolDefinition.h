#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class ActivateToolDefinition : BehaviorDefinition {

public:
    virtual ~ActivateToolDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    ActivateToolDefinition();
};
