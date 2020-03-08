#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class SelectorDefinition : CompositeDefinition {

public:
    virtual SelectorDefinition::~SelectorDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    SelectorDefinition(void);
};
