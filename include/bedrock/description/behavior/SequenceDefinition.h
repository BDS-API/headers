#pragma once

#include "../../../json/Value.h"
#include "CompositeDefinition.h"


class SequenceDefinition : public CompositeDefinition {

public:
    virtual ~SequenceDefinition(); // _ZN18SequenceDefinitionD2Ev
    virtual void __fake_function0(); // fake
    virtual void load(Json::Value, BehaviorFactory const&); // _ZN18SequenceDefinition4loadEN4Json5ValueERK15BehaviorFactory
    SequenceDefinition(); // _ZN18SequenceDefinitionC2Ev
};
