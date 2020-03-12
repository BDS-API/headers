#pragma once

#include "../../../json/Value.h"
#include "DecoratorDefinition.h"
#include "../../../unmapped/BehaviorFactory.h"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    ~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);
    RepeatUntilSuccessDefinition();
};
