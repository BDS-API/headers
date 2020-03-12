#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class InverterDefinition : DecoratorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~InverterDefinition();
    InverterDefinition();
};
