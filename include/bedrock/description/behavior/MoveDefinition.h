#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class MoveDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~MoveDefinition();
    MoveDefinition();
};
