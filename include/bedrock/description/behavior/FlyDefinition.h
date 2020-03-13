#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class FlyDefinition : BehaviorDefinition {

public:
    ~FlyDefinition(); // _ZN13FlyDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN13FlyDefinition4loadEN4Json5ValueERK15BehaviorFactory
    FlyDefinition(); // _ZN13FlyDefinitionC2Ev
};
