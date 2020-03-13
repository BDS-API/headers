#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class FindBlockDefinition : BehaviorDefinition {

public:
    ~FindBlockDefinition(); // _ZN19FindBlockDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19FindBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FindBlockDefinition(); // _ZN19FindBlockDefinitionC2Ev
};
