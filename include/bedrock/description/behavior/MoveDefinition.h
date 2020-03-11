#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class MoveDefinition : BehaviorDefinition {

public:
    virtual ~MoveDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    MoveDefinition();
};
