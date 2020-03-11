#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindBlockDefinition : BehaviorDefinition {

public:
    virtual ~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FindBlockDefinition();
};
