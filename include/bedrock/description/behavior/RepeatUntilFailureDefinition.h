#pragma once

class RepeatUntilFailureDefinition : DecoratorDefinition {

public:
    virtual RepeatUntilFailureDefinition::~RepeatUntilFailureDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    RepeatUntilFailureDefinition(void);
};
