#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveToDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~MoveToDefinition();
    MoveToDefinition();
};
