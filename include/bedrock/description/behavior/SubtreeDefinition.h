#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class SubtreeDefinition : public BehaviorDefinition {

public:
    virtual ~SubtreeDefinition(); // _ZN17SubtreeDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN17SubtreeDefinition4loadEN4Json5ValueERK15BehaviorFactory
    SubtreeDefinition(); // _ZN17SubtreeDefinitionC2Ev
};
