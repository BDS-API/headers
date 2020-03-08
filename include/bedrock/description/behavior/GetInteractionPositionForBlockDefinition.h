#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    virtual GetInteractionPositionForBlockDefinition::~GetInteractionPositionForBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    GetInteractionPositionForBlockDefinition(void);
};
