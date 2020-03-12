#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveDefinition : BehaviorDefinition {

public:
    ~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    MoveDefinition();
};
