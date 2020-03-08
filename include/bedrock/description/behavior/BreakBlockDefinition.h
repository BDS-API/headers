#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class BreakBlockDefinition : BehaviorDefinition {

public:
    virtual BreakBlockDefinition::~BreakBlockDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    BreakBlockDefinition(void);
};
