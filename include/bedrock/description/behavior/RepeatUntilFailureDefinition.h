#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./DecoratorDefinition.h"
#include "../../../json/Value.h"


class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    virtual ~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilFailureDefinition();
};
