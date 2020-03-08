#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    GetInteractionPositionForBlockDefinition(void);
};
