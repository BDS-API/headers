#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class BreakBlockDefinition : BehaviorDefinition {

public:
    ~BreakBlockDefinition(); // _ZN20BreakBlockDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN20BreakBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    BreakBlockDefinition(); // _ZN20BreakBlockDefinitionC2Ev
};
