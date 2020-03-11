#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual ~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitTicksDefinition();
};
