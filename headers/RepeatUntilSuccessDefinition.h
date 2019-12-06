#pragma once

class RepeatUntilSuccessDefinition : DecoratorDefinition {

public:
    virtual ~RepeatUntilSuccessDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void RepeatUntilSuccessDefinition(void);
};
