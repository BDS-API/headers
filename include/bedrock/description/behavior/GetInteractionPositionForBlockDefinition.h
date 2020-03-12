#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    ~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    GetInteractionPositionForBlockDefinition();
};
