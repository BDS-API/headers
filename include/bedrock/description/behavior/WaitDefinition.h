#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class WaitDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~WaitDefinition();
    WaitDefinition();
};
