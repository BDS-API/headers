#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class BreakBlockDefinition : BehaviorDefinition {

public:
    ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    BreakBlockDefinition();
};
