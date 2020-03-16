#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class GetInteractionPositionForBlockDefinition : public BehaviorDefinition {

public:
    virtual ~GetInteractionPositionForBlockDefinition(); // _ZN40GetInteractionPositionForBlockDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN40GetInteractionPositionForBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    GetInteractionPositionForBlockDefinition(); // _ZN40GetInteractionPositionForBlockDefinitionC2Ev
};
