#pragma once

class FindActorDefinition : BehaviorDefinition {

public:
    virtual FindActorDefinition::~FindActorDefinition();
    virtual void load(Json::Value, BehaviorFactory const&);

    FindActorDefinition(void);
};
