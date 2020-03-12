#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class FindBlockDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~FindBlockDefinition();
    FindBlockDefinition();
};
