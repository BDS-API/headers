#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class GetInteractionPositionForBlockDefinition : BehaviorDefinition {

public:
    ~GetInteractionPositionForBlockDefinition(); // _ZN40GetInteractionPositionForBlockDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN40GetInteractionPositionForBlockDefinition4loadEN4Json5ValueERK15BehaviorFactory
    GetInteractionPositionForBlockDefinition(); // _ZN40GetInteractionPositionForBlockDefinitionC2Ev
};
