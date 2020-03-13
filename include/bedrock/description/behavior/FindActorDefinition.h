#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class FindActorDefinition : BehaviorDefinition {

public:
    ~FindActorDefinition(); // _ZN19FindActorDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN19FindActorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FindActorDefinition(); // _ZN19FindActorDefinitionC2Ev
};
