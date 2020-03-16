#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveToDefinition : public BehaviorDefinition {

public:
    virtual ~MoveToDefinition(); // _ZN16MoveToDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN16MoveToDefinition4loadEN4Json5ValueERK15BehaviorFactory
    MoveToDefinition(); // _ZN16MoveToDefinitionC2Ev
};
