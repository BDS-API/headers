#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtActorDefinition : public BehaviorDefinition {

public:
    virtual ~LookAtActorDefinition(); // _ZN21LookAtActorDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN21LookAtActorDefinition4loadEN4Json5ValueERK15BehaviorFactory
    LookAtActorDefinition(); // _ZN21LookAtActorDefinitionC2Ev
};
