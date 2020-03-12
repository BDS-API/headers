#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class FindBlockDefinition : BehaviorDefinition {

public:
    ~FindBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    FindBlockDefinition();
};
