#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveDefinition : public BehaviorDefinition {

public:
    virtual ~MoveDefinition(); // _ZN14MoveDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN14MoveDefinition4loadEN4Json5ValueERK15BehaviorFactory
    MoveDefinition(); // _ZN14MoveDefinitionC2Ev
};
