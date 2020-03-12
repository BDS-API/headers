#pragma once

#include "CompositeDefinition.h"
#include "../../../json/Value.h"


class SequenceDefinition : CompositeDefinition {

public:
    ~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    SequenceDefinition();
};
