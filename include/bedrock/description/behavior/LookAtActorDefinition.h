#pragma once

class LookAtActorDefinition : BehaviorDefinition {

public:
    virtual LookAtActorDefinition::~LookAtActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    LookAtActorDefinition(void);
};
