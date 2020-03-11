#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveToDefinition : BehaviorDefinition {

public:
    virtual ~MoveToDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveToDefinition();
};
