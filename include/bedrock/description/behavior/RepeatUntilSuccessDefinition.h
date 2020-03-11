#pragma once

#include "../../../unmapped/BehaviorFactory.h"
#include "./DecoratorDefinition.h"
#include "../../../json/Value.h"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    virtual ~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilSuccessDefinition();
};
