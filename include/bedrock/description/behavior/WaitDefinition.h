#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class WaitDefinition : BehaviorDefinition {

public:
    virtual ~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitDefinition();
};
