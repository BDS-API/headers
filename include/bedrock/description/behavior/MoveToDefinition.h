#pragma once

#include "../../../json/Value.h"
#include "BehaviorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class MoveToDefinition : BehaviorDefinition {

public:
    ~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    MoveToDefinition();
};
