#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindActorDefinition : public BehaviorDefinition {

public:
    virtual ~FindActorDefinition(); // _ZN19FindActorDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19FindActorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FindActorDefinition(); // _ZN19FindActorDefinitionC2Ev
};
