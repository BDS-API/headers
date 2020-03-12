#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    virtual void load(Json::Value, BehaviorFactory const&);
    ~RepeatUntilSuccessDefinition();
    RepeatUntilSuccessDefinition();
};
