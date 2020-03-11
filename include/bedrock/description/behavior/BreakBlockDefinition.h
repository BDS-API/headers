#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class BreakBlockDefinition : BehaviorDefinition {

public:
    virtual ~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    BreakBlockDefinition();
};
