#pragma once

#include "CompositeDefinition.h"
#include "../../../json/Value.h"
#include "../../../unmapped/BehaviorFactory.h"


class SelectorDefinition : CompositeDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~SelectorDefinition();
    SelectorDefinition();
};
