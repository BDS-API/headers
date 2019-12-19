#pragma once

class InteractActionDefinition : BehaviorDefinition {

public:
    virtual InteractActionDefinition::~InteractActionDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    InteractActionDefinition(void);
};
