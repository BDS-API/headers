#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtBlockDefinition : public BehaviorDefinition {

public:
    virtual ~LookAtBlockDefinition(); // _ZN21LookAtBlockDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN21LookAtBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    LookAtBlockDefinition(); // _ZN21LookAtBlockDefinitionC2Ev
};
