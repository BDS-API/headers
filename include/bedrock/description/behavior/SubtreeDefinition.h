#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"


class SubtreeDefinition : BehaviorDefinition {

public:
    ~SubtreeDefinition(); // _ZN17SubtreeDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN17SubtreeDefinition4loadEN4Json5ValueERK15BehaviorFactory
    SubtreeDefinition(); // _ZN17SubtreeDefinitionC2Ev
};
