#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual WaitTicksDefinition::~WaitTicksDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitTicksDefinition(void);
};
