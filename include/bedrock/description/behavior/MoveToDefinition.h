#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class MoveToDefinition : BehaviorDefinition {

public:
    ~MoveToDefinition(); // _ZN16MoveToDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN16MoveToDefinition4loadEN4Json5ValueERK15BehaviorFactory
    MoveToDefinition(); // _ZN16MoveToDefinitionC2Ev
};
