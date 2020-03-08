#pragma once

#include "../../../unmapped/BehaviorFactory"
#include "../../../json/Value"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    virtual RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition()
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilSuccessDefinition(void);
};
