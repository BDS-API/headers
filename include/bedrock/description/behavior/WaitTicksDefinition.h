#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class WaitTicksDefinition : BehaviorDefinition {

public:
    ~WaitTicksDefinition(); // _ZN19WaitTicksDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19WaitTicksDefinition4loadEN4Json5ValueERK15BehaviorFactory
    WaitTicksDefinition(); // _ZN19WaitTicksDefinitionC2Ev
};
