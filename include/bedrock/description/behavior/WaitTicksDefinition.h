#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class WaitTicksDefinition : BehaviorDefinition {

public:
    ~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    WaitTicksDefinition();
};
