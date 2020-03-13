#pragma once

#include "../../../json/Value.h"
#include "CompositeDefinition.h"


class SequenceDefinition : CompositeDefinition {

public:
    ~SequenceDefinition(); // _ZN18SequenceDefinitionD2Ev
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18SequenceDefinition4loadEN4Json5ValueERK15BehaviorFactory
    SequenceDefinition(); // _ZN18SequenceDefinitionC2Ev
};
