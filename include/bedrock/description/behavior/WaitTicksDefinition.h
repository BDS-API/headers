#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~WaitTicksDefinition();
    WaitTicksDefinition();
};
