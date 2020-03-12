#pragma once

#include "BehaviorDefinition.h"
#include "../../../json/Value.h"


class InteractActionDefinition : BehaviorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~InteractActionDefinition();
    InteractActionDefinition();
};
