#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class InverterDefinition : DecoratorDefinition {

public:
    ~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    InverterDefinition();
};
