#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class WaitDefinition : BehaviorDefinition {

public:
    WaitDefinition::~WaitDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitDefinition(void);
};
