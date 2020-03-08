#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class SelectorDefinition : CompositeDefinition {

public:
    virtual SelectorDefinition::~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SelectorDefinition(void);
};
