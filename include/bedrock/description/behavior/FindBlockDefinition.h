#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindBlockDefinition : public BehaviorDefinition {

public:
    virtual ~FindBlockDefinition(); // _ZN19FindBlockDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19FindBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FindBlockDefinition(); // _ZN19FindBlockDefinitionC2Ev
};
