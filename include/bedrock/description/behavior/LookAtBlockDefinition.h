#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class LookAtBlockDefinition : BehaviorDefinition {

public:
    virtual ~LookAtBlockDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtBlockDefinition();
};
