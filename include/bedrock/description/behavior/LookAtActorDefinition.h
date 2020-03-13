#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class LookAtActorDefinition : BehaviorDefinition {

public:
    ~LookAtActorDefinition(); // _ZN21LookAtActorDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN21LookAtActorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    LookAtActorDefinition(); // _ZN21LookAtActorDefinitionC2Ev
};
