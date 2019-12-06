#pragma once

class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    virtual ~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    void RepeatUntilFailureDefinition(void);
};
