#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class BreakBlockDefinition : BehaviorDefinition {

public:
    virtual BreakBlockDefinition::~BreakBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    BreakBlockDefinition(void);
};
