#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./CompositeDefinition.h"
#include "../../../json/Value.h"


class SequenceDefinition : CompositeDefinition {

public:
    virtual ~SequenceDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SequenceDefinition();
};
