#pragma once

#include "CompositeDefinition.h"
#include "../../../json/Value.h"


class SelectorDefinition : CompositeDefinition {

public:
    ~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    SelectorDefinition();
};
