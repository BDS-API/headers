#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class MoveDefinition : BehaviorDefinition {

public:
    ~MoveDefinition(); // _ZN14MoveDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN14MoveDefinition4loadEN4Json5ValueERK15BehaviorFactory
    MoveDefinition(); // _ZN14MoveDefinitionC2Ev
};
