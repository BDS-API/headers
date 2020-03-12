#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class SubtreeDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~SubtreeDefinition();
    SubtreeDefinition();
};
