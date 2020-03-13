#pragma once

#include "../../../json/Value.h"
#include "CompositeDefinition.h"


class SelectorDefinition : CompositeDefinition {

public:
    ~SelectorDefinition(); // _ZN18SelectorDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18SelectorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    SelectorDefinition(); // _ZN18SelectorDefinitionC2Ev
};
