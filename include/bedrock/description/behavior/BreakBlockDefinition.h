#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class BreakBlockDefinition : BehaviorDefinition {

public:
    ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    BreakBlockDefinition();
};
