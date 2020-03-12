#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class SubtreeDefinition : BehaviorDefinition {

public:
    ~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    SubtreeDefinition();
};
