#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    virtual ~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    GetInteractionPositionForBlockDefinition();
};
