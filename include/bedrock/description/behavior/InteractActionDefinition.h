#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./BehaviorDefinition.h"
#include "../../../json/Value.h"


class InteractActionDefinition : BehaviorDefinition {

public:
    virtual ~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    InteractActionDefinition();
};
