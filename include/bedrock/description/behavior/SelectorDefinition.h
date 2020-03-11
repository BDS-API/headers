#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./CompositeDefinition.h"
#include "../../../json/Value.h"


class SelectorDefinition : CompositeDefinition {

public:
    virtual ~SelectorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SelectorDefinition();
};
