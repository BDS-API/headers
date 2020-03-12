#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class LookAtBlockDefinition : BehaviorDefinition {

public:
    ~LookAtBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    LookAtBlockDefinition();
};
