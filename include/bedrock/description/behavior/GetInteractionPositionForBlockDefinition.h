#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~GetInteractionPositionForBlockDefinition();
    GetInteractionPositionForBlockDefinition();
};
