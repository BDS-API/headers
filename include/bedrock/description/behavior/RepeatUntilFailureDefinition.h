#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~RepeatUntilFailureDefinition();
    RepeatUntilFailureDefinition();
};
