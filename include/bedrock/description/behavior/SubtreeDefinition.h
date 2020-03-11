#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class SubtreeDefinition : BehaviorDefinition {

public:
    virtual ~SubtreeDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    SubtreeDefinition();
};
