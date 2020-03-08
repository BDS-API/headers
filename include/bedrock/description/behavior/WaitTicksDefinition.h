#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class WaitTicksDefinition : BehaviorDefinition {

public:
    virtual WaitTicksDefinition::~WaitTicksDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    WaitTicksDefinition(void);
};
