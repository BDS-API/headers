#pragma once

#include "../../../json/Value"
#include "../../../unmapped/BehaviorFactory"


class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    virtual RepeatUntilSuccessDefinition::~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilSuccessDefinition(void);
};
