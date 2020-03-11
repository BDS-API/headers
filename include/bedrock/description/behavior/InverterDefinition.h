#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./DecoratorDefinition.h"
#include "../../../json/Value.h"


class InverterDefinition : DecoratorDefinition {

public:
    virtual ~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    InverterDefinition();
};
