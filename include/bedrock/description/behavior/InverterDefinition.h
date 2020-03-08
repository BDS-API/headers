#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class InverterDefinition : DecoratorDefinition {

public:
    InverterDefinition::~InverterDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    InverterDefinition(void);
};
