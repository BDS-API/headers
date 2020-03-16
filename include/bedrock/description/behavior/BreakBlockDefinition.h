#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class BreakBlockDefinition : public BehaviorDefinition {

public:
    virtual ~BreakBlockDefinition(); // _ZN20BreakBlockDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN20BreakBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    BreakBlockDefinition(); // _ZN20BreakBlockDefinitionC2Ev
};
