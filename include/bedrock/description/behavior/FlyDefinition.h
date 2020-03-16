#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FlyDefinition : public BehaviorDefinition {

public:
    virtual ~FlyDefinition(); // _ZN13FlyDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN13FlyDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FlyDefinition(); // _ZN13FlyDefinitionC2Ev
};
