#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    virtual RepeatUntilFailureDefinition::~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilFailureDefinition(void);
};
