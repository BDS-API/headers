#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class WaitDefinition : BehaviorDefinition {

public:
    virtual WaitDefinition::~WaitDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitDefinition(void);
};
