#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtBlockDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~LookAtBlockDefinition();
    LookAtBlockDefinition();
};
