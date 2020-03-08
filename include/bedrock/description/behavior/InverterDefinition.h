#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class InverterDefinition : DecoratorDefinition {

public:
    virtual InverterDefinition::~InverterDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    InverterDefinition(void);
};
